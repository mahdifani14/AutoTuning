; ModuleID = 'mem.mips.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

define i8* @memset(i8* %p, i32 %c, i32 %n) {
  %1 = getelementptr inbounds i8* %p, i32 %n
  %2 = icmp eq i32 %n, 0
  br i1 %2, label %._crit_edge, label %.lr.ph

.lr.ph:                                           ; preds = %0
  %3 = trunc i32 %c to i8
  br label %4

; <label>:4                                       ; preds = %4, %.lr.ph
  %pb.01 = phi i8* [ %p, %.lr.ph ], [ %5, %4 ]
  %5 = getelementptr inbounds i8* %pb.01, i32 1
  store i8 %3, i8* %pb.01, align 1, !tbaa !1
  %6 = icmp eq i8* %5, %1
  br i1 %6, label %._crit_edge.loopexit, label %4

._crit_edge.loopexit:                             ; preds = %4
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %0
  ret i8* %p
}

define i8* @memcpy(i8* %d, i8* %s, i32 %n) {
  %1 = icmp eq i32 %n, 0
  br i1 %1, label %._crit_edge, label %.lr.ph.preheader

.lr.ph.preheader:                                 ; preds = %0
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %st.03 = phi i8* [ %3, %.lr.ph ], [ %s, %.lr.ph.preheader ]
  %dt.02 = phi i8* [ %5, %.lr.ph ], [ %d, %.lr.ph.preheader ]
  %.01 = phi i32 [ %2, %.lr.ph ], [ %n, %.lr.ph.preheader ]
  %2 = add nsw i32 %.01, -1
  %3 = getelementptr inbounds i8* %st.03, i32 1
  %4 = load i8* %st.03, align 1, !tbaa !1
  %5 = getelementptr inbounds i8* %dt.02, i32 1
  store i8 %4, i8* %dt.02, align 1, !tbaa !1
  %6 = icmp eq i32 %2, 0
  br i1 %6, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %0
  ret i8* %d
}


!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{metadata !2, metadata !2, i64 0}
!2 = metadata !{metadata !"omnipotent char", metadata !3, i64 0}
!3 = metadata !{metadata !"Simple C/C++ TBAA"}
