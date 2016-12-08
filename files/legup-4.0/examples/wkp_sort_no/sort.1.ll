; ModuleID = 'sort.1.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@input = internal unnamed_addr constant [100 x i32] [i32 283, i32 286, i32 177, i32 115, i32 293, i32 235, i32 286, i32 192, i32 249, i32 121, i32 62, i32 127, i32 290, i32 259, i32 263, i32 226, i32 240, i32 126, i32 172, i32 136, i32 11, i32 68, i32 267, i32 129, i32 182, i32 230, i32 62, i32 223, i32 67, i32 235, i32 29, i32 102, i32 222, i32 258, i32 269, i32 267, i32 193, i32 256, i32 211, i32 142, i32 129, i32 273, i32 21, i32 119, i32 284, i32 37, i32 98, i32 224, i32 215, i32 270, i32 113, i32 226, i32 91, i32 80, i32 56, i32 273, i32 62, i32 170, i32 196, i32 181, i32 105, i32 225, i32 284, i32 236, i32 46, i32 5, i32 129, i32 13, i32 257, i32 24, i32 195, i32 282, i32 45, i32 14, i32 267, i32 134, i32 164, i32 243, i32 50, i32 187, i32 108, i32 276, i32 278, i32 188, i32 84, i32 3, i32 251, i32 254, i32 199, i32 132, i32 56, i32 176, i32 168, i32 139, i32 112, i32 226, i32 186, i32 294, i32 239, i32 27], align 4
@correctOutput = internal unnamed_addr constant [100 x i32] [i32 3, i32 5, i32 11, i32 13, i32 14, i32 21, i32 24, i32 27, i32 29, i32 37, i32 45, i32 46, i32 50, i32 56, i32 56, i32 62, i32 62, i32 62, i32 67, i32 68, i32 80, i32 84, i32 91, i32 98, i32 102, i32 105, i32 108, i32 112, i32 113, i32 115, i32 119, i32 121, i32 126, i32 127, i32 129, i32 129, i32 129, i32 132, i32 134, i32 136, i32 139, i32 142, i32 164, i32 168, i32 170, i32 172, i32 176, i32 177, i32 181, i32 182, i32 186, i32 187, i32 188, i32 192, i32 193, i32 195, i32 196, i32 199, i32 211, i32 215, i32 222, i32 223, i32 224, i32 225, i32 226, i32 226, i32 226, i32 230, i32 235, i32 235, i32 236, i32 239, i32 240, i32 243, i32 249, i32 251, i32 254, i32 256, i32 257, i32 258, i32 259, i32 263, i32 267, i32 267, i32 267, i32 269, i32 270, i32 273, i32 273, i32 276, i32 278, i32 282, i32 283, i32 284, i32 284, i32 286, i32 286, i32 290, i32 293, i32 294], align 4
@y = internal unnamed_addr global [100 x i32] zeroinitializer, align 4
@.str = private unnamed_addr constant [4 x i8] c"%d\09\00", align 1
@.str1 = private unnamed_addr constant [15 x i8] c"\0A\0A-----------\0A\00", align 1

; Function Attrs: nounwind
define i32 @main() #0 {
  br label %.lr.ph7.i

.lr.ph7.i:                                        ; preds = %.lr.ph7.i, %0
  %i.05.i = phi i32 [ %2, %.lr.ph7.i ], [ 0, %0 ]
  %scevgep10 = getelementptr [100 x i32]* @y, i32 0, i32 %i.05.i
  %scevgep11 = getelementptr [100 x i32]* @input, i32 0, i32 %i.05.i
  %1 = load i32* %scevgep11, align 4, !tbaa !1
  store i32 %1, i32* %scevgep10, align 4, !tbaa !1
  %2 = add nsw i32 %i.05.i, 1
  %exitcond9 = icmp eq i32 %2, 100
  br i1 %exitcond9, label %.lr.ph.i.preheader, label %.lr.ph7.i

.lr.ph.i.preheader:                               ; preds = %.lr.ph7.i
  br label %.lr.ph.i

.loopexit.i.loopexit:                             ; preds = %._crit_edge9.i
  br label %.loopexit.i

.loopexit.i:                                      ; preds = %.lr.ph.i, %.loopexit.i.loopexit
  %exitcond5 = icmp eq i32 %8, 99
  br i1 %exitcond5, label %sort.exit.preheader, label %.lr.ph.i

sort.exit.preheader:                              ; preds = %.loopexit.i
  br label %sort.exit

.lr.ph.i:                                         ; preds = %.loopexit.i, %.lr.ph.i.preheader
  %3 = phi i32 [ %8, %.loopexit.i ], [ 0, %.lr.ph.i.preheader ]
  %4 = add i32 %3, 2
  %5 = mul i32 %3, -1
  %6 = add i32 %5, 98
  %scevgep7 = getelementptr [100 x i32]* @y, i32 0, i32 %3
  %7 = add i32 %3, 1
  %scevgep8 = getelementptr [100 x i32]* @y, i32 0, i32 %7
  %8 = add nsw i32 %3, 1
  %.pre.i = load i32* %scevgep7, align 4, !tbaa !1
  %9 = load i32* %scevgep8, align 4, !tbaa !1
  %10 = icmp sgt i32 %.pre.i, %9
  %d.0.position.0.i3 = select i1 %10, i32 %7, i32 %3
  %11 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %d.0.position.0.i3
  %12 = load i32* %11, align 4, !tbaa !1
  store i32 %12, i32* %scevgep7, align 4, !tbaa !1
  store i32 %.pre.i, i32* %11, align 4, !tbaa !1
  %exitcond.i4 = icmp eq i32 %4, 100
  br i1 %exitcond.i4, label %.loopexit.i, label %._crit_edge9.i.preheader

._crit_edge9.i.preheader:                         ; preds = %.lr.ph.i
  br label %._crit_edge9.i

._crit_edge9.i:                                   ; preds = %._crit_edge9.i, %._crit_edge9.i.preheader
  %indvar = phi i32 [ 0, %._crit_edge9.i.preheader ], [ %indvar.next, %._crit_edge9.i ]
  %d.0.position.0.i5 = phi i32 [ %d.0.position.0.i, %._crit_edge9.i ], [ %d.0.position.0.i3, %._crit_edge9.i.preheader ]
  %13 = phi i32 [ %.pre10.i, %._crit_edge9.i ], [ %.pre.i, %._crit_edge9.i.preheader ]
  %14 = add i32 %4, %indvar
  %scevgep4 = getelementptr [100 x i32]* @y, i32 0, i32 %14
  %.pre10.i = load i32* %scevgep7, align 4, !tbaa !1
  %15 = load i32* %scevgep4, align 4, !tbaa !1
  %16 = icmp sgt i32 %13, %15
  %d.0.position.0.i = select i1 %16, i32 %14, i32 %d.0.position.0.i5
  %17 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %d.0.position.0.i
  %18 = load i32* %17, align 4, !tbaa !1
  store i32 %18, i32* %scevgep7, align 4, !tbaa !1
  store i32 %.pre10.i, i32* %17, align 4, !tbaa !1
  %indvar.next = add i32 %indvar, 1
  %exitcond3 = icmp eq i32 %indvar.next, %6
  br i1 %exitcond3, label %.loopexit.i.loopexit, label %._crit_edge9.i

sort.exit:                                        ; preds = %sort.exit, %sort.exit.preheader
  %i.02 = phi i32 [ %21, %sort.exit ], [ 0, %sort.exit.preheader ]
  %scevgep2 = getelementptr [100 x i32]* @y, i32 0, i32 %i.02
  %19 = load i32* %scevgep2, align 4, !tbaa !1
  %20 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str, i32 0, i32 0), i32 %19) #1
  %21 = add nsw i32 %i.02, 1
  %exitcond = icmp eq i32 %21, 100
  br i1 %exitcond, label %22, label %sort.exit

; <label>:22                                      ; preds = %sort.exit
  %23 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([15 x i8]* @.str1, i32 0, i32 0)) #1
  br label %24

; <label>:24                                      ; preds = %24, %22
  %i.11 = phi i32 [ 0, %22 ], [ %27, %24 ]
  %scevgep = getelementptr [100 x i32]* @correctOutput, i32 0, i32 %i.11
  %25 = load i32* %scevgep, align 4, !tbaa !1
  %26 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str, i32 0, i32 0), i32 %25) #1
  %27 = add nsw i32 %i.11, 1
  %exitcond1 = icmp eq i32 %27, 100
  br i1 %exitcond1, label %28, label %24

; <label>:28                                      ; preds = %24
  ret i32 0
}

; Function Attrs: nounwind
declare i32 @printf(i8* nocapture readonly, ...) #0

attributes #0 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nobuiltin nounwind }

!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{metadata !2, metadata !2, i64 0}
!2 = metadata !{metadata !"int", metadata !3, i64 0}
!3 = metadata !{metadata !"omnipotent char", metadata !4, i64 0}
!4 = metadata !{metadata !"Simple C/C++ TBAA"}
