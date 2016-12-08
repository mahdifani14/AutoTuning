; ModuleID = 'sort.prelto.linked.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@input = global [100 x i32] [i32 283, i32 286, i32 177, i32 115, i32 293, i32 235, i32 286, i32 192, i32 249, i32 121, i32 62, i32 127, i32 290, i32 259, i32 263, i32 226, i32 240, i32 126, i32 172, i32 136, i32 11, i32 68, i32 267, i32 129, i32 182, i32 230, i32 62, i32 223, i32 67, i32 235, i32 29, i32 102, i32 222, i32 258, i32 269, i32 267, i32 193, i32 256, i32 211, i32 142, i32 129, i32 273, i32 21, i32 119, i32 284, i32 37, i32 98, i32 224, i32 215, i32 270, i32 113, i32 226, i32 91, i32 80, i32 56, i32 273, i32 62, i32 170, i32 196, i32 181, i32 105, i32 225, i32 284, i32 236, i32 46, i32 5, i32 129, i32 13, i32 257, i32 24, i32 195, i32 282, i32 45, i32 14, i32 267, i32 134, i32 164, i32 243, i32 50, i32 187, i32 108, i32 276, i32 278, i32 188, i32 84, i32 3, i32 251, i32 254, i32 199, i32 132, i32 56, i32 176, i32 168, i32 139, i32 112, i32 226, i32 186, i32 294, i32 239, i32 27], align 4
@correctOutput = global [100 x i32] [i32 3, i32 5, i32 11, i32 13, i32 14, i32 21, i32 24, i32 27, i32 29, i32 37, i32 45, i32 46, i32 50, i32 56, i32 56, i32 62, i32 62, i32 62, i32 67, i32 68, i32 80, i32 84, i32 91, i32 98, i32 102, i32 105, i32 108, i32 112, i32 113, i32 115, i32 119, i32 121, i32 126, i32 127, i32 129, i32 129, i32 129, i32 132, i32 134, i32 136, i32 139, i32 142, i32 164, i32 168, i32 170, i32 172, i32 176, i32 177, i32 181, i32 182, i32 186, i32 187, i32 188, i32 192, i32 193, i32 195, i32 196, i32 199, i32 211, i32 215, i32 222, i32 223, i32 224, i32 225, i32 226, i32 226, i32 226, i32 230, i32 235, i32 235, i32 236, i32 239, i32 240, i32 243, i32 249, i32 251, i32 254, i32 256, i32 257, i32 258, i32 259, i32 263, i32 267, i32 267, i32 267, i32 269, i32 270, i32 273, i32 273, i32 276, i32 278, i32 282, i32 283, i32 284, i32 284, i32 286, i32 286, i32 290, i32 293, i32 294], align 4
@y = common global [100 x i32] zeroinitializer, align 4
@.str = private unnamed_addr constant [4 x i8] c"%d\09\00", align 1
@.str1 = private unnamed_addr constant [15 x i8] c"\0A\0A-----------\0A\00", align 1

; Function Attrs: nounwind
define void @sort(i32 %N, i32* nocapture %y) #0 {
  %1 = add i32 %N, -1
  %2 = icmp slt i32 %N, 1
  br i1 %2, label %.preheader, label %.lr.ph7.preheader

.lr.ph7.preheader:                                ; preds = %0
  br label %.lr.ph7

.preheader.loopexit:                              ; preds = %.lr.ph7
  br label %.preheader

.preheader:                                       ; preds = %.preheader.loopexit, %0
  %3 = add nsw i32 %N, -2
  %4 = icmp slt i32 %3, 0
  br i1 %4, label %._crit_edge, label %.lr.ph4.preheader

.lr.ph4.preheader:                                ; preds = %.preheader
  br label %.lr.ph4

.lr.ph7:                                          ; preds = %.lr.ph7, %.lr.ph7.preheader
  %i.05 = phi i32 [ %8, %.lr.ph7 ], [ 0, %.lr.ph7.preheader ]
  %5 = getelementptr inbounds [100 x i32]* @input, i32 0, i32 %i.05
  %6 = load i32* %5, align 4, !tbaa !1
  %7 = getelementptr inbounds i32* %y, i32 %i.05
  store i32 %6, i32* %7, align 4, !tbaa !1
  %8 = add nsw i32 %i.05, 1
  %9 = icmp slt i32 %i.05, %1
  br i1 %9, label %.lr.ph7, label %.preheader.loopexit

.loopexit.loopexit:                               ; preds = %13
  br label %.loopexit

.loopexit:                                        ; preds = %.lr.ph4, %.loopexit.loopexit
  %exitcond8 = icmp eq i32 %10, %1
  br i1 %exitcond8, label %._crit_edge.loopexit, label %.lr.ph4

.lr.ph4:                                          ; preds = %.loopexit, %.lr.ph4.preheader
  %i.13 = phi i32 [ %10, %.loopexit ], [ 0, %.lr.ph4.preheader ]
  %10 = add nsw i32 %i.13, 1
  %11 = icmp slt i32 %i.13, %1
  br i1 %11, label %.lr.ph, label %.loopexit

.lr.ph:                                           ; preds = %.lr.ph4
  %12 = getelementptr inbounds i32* %y, i32 %i.13
  %.pre = load i32* %12, align 4, !tbaa !1
  br label %13

; <label>:13                                      ; preds = %._crit_edge9, %.lr.ph
  %14 = phi i32 [ %.pre, %.lr.ph ], [ %.pre10, %._crit_edge9 ]
  %15 = phi i32 [ %.pre, %.lr.ph ], [ %14, %._crit_edge9 ]
  %d.02 = phi i32 [ %10, %.lr.ph ], [ %21, %._crit_edge9 ]
  %position.01 = phi i32 [ %i.13, %.lr.ph ], [ %d.0.position.0, %._crit_edge9 ]
  %16 = getelementptr inbounds i32* %y, i32 %d.02
  %17 = load i32* %16, align 4, !tbaa !1
  %18 = icmp sgt i32 %15, %17
  %d.0.position.0 = select i1 %18, i32 %d.02, i32 %position.01
  %19 = getelementptr inbounds i32* %y, i32 %d.0.position.0
  %20 = load i32* %19, align 4, !tbaa !1
  store i32 %20, i32* %12, align 4, !tbaa !1
  store i32 %14, i32* %19, align 4, !tbaa !1
  %21 = add nsw i32 %d.02, 1
  %exitcond = icmp eq i32 %21, %N
  br i1 %exitcond, label %.loopexit.loopexit, label %._crit_edge9

._crit_edge9:                                     ; preds = %13
  %.pre10 = load i32* %12, align 4, !tbaa !1
  br label %13

._crit_edge.loopexit:                             ; preds = %.loopexit
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %.preheader
  ret void
}

; Function Attrs: nounwind
define i32 @main() #0 {
  br label %.lr.ph7.i

.lr.ph7.i:                                        ; preds = %.lr.ph7.i, %0
  %i.05.i = phi i32 [ %4, %.lr.ph7.i ], [ 0, %0 ]
  %1 = getelementptr inbounds [100 x i32]* @input, i32 0, i32 %i.05.i
  %2 = load i32* %1, align 4, !tbaa !1
  %3 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %i.05.i
  store i32 %2, i32* %3, align 4, !tbaa !1
  %4 = add nsw i32 %i.05.i, 1
  %exitcond7 = icmp eq i32 %4, 100
  br i1 %exitcond7, label %.lr.ph.i.preheader, label %.lr.ph7.i

.lr.ph.i.preheader:                               ; preds = %.lr.ph7.i
  br label %.lr.ph.i

.loopexit.i.loopexit:                             ; preds = %._crit_edge9.i
  br label %.loopexit.i

.loopexit.i:                                      ; preds = %.lr.ph.i, %.loopexit.i.loopexit
  %exitcond8.i = icmp eq i32 %5, 99
  br i1 %exitcond8.i, label %sort.exit.preheader, label %.lr.ph.i

sort.exit.preheader:                              ; preds = %.loopexit.i
  br label %sort.exit

.lr.ph.i:                                         ; preds = %.loopexit.i, %.lr.ph.i.preheader
  %i.13.i = phi i32 [ %5, %.loopexit.i ], [ 0, %.lr.ph.i.preheader ]
  %5 = add nsw i32 %i.13.i, 1
  %6 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %i.13.i
  %.pre.i = load i32* %6, align 4, !tbaa !1
  %7 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %5
  %8 = load i32* %7, align 4, !tbaa !1
  %9 = icmp sgt i32 %.pre.i, %8
  %d.0.position.0.i3 = select i1 %9, i32 %5, i32 %i.13.i
  %10 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %d.0.position.0.i3
  %11 = load i32* %10, align 4, !tbaa !1
  store i32 %11, i32* %6, align 4, !tbaa !1
  store i32 %.pre.i, i32* %10, align 4, !tbaa !1
  %12 = add nsw i32 %i.13.i, 2
  %exitcond.i4 = icmp eq i32 %12, 100
  br i1 %exitcond.i4, label %.loopexit.i, label %._crit_edge9.i.preheader

._crit_edge9.i.preheader:                         ; preds = %.lr.ph.i
  br label %._crit_edge9.i

._crit_edge9.i:                                   ; preds = %._crit_edge9.i, %._crit_edge9.i.preheader
  %13 = phi i32 [ %20, %._crit_edge9.i ], [ %12, %._crit_edge9.i.preheader ]
  %d.0.position.0.i5 = phi i32 [ %d.0.position.0.i, %._crit_edge9.i ], [ %d.0.position.0.i3, %._crit_edge9.i.preheader ]
  %14 = phi i32 [ %.pre10.i, %._crit_edge9.i ], [ %.pre.i, %._crit_edge9.i.preheader ]
  %.pre10.i = load i32* %6, align 4, !tbaa !1
  %15 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %13
  %16 = load i32* %15, align 4, !tbaa !1
  %17 = icmp sgt i32 %14, %16
  %d.0.position.0.i = select i1 %17, i32 %13, i32 %d.0.position.0.i5
  %18 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %d.0.position.0.i
  %19 = load i32* %18, align 4, !tbaa !1
  store i32 %19, i32* %6, align 4, !tbaa !1
  store i32 %.pre10.i, i32* %18, align 4, !tbaa !1
  %20 = add nsw i32 %13, 1
  %exitcond.i = icmp eq i32 %20, 100
  br i1 %exitcond.i, label %.loopexit.i.loopexit, label %._crit_edge9.i

sort.exit:                                        ; preds = %sort.exit, %sort.exit.preheader
  %i.02 = phi i32 [ %24, %sort.exit ], [ 0, %sort.exit.preheader ]
  %21 = getelementptr inbounds [100 x i32]* @y, i32 0, i32 %i.02
  %22 = load i32* %21, align 4, !tbaa !1
  %23 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str, i32 0, i32 0), i32 %22) #2
  %24 = add nsw i32 %i.02, 1
  %exitcond6 = icmp eq i32 %24, 100
  br i1 %exitcond6, label %25, label %sort.exit

; <label>:25                                      ; preds = %sort.exit
  %26 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([15 x i8]* @.str1, i32 0, i32 0)) #2
  br label %27

; <label>:27                                      ; preds = %27, %25
  %i.11 = phi i32 [ 0, %25 ], [ %31, %27 ]
  %28 = getelementptr inbounds [100 x i32]* @correctOutput, i32 0, i32 %i.11
  %29 = load i32* %28, align 4, !tbaa !1
  %30 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str, i32 0, i32 0), i32 %29) #2
  %31 = add nsw i32 %i.11, 1
  %exitcond = icmp eq i32 %31, 100
  br i1 %exitcond, label %32, label %27

; <label>:32                                      ; preds = %27
  ret i32 0
}

declare i32 @printf(i8*, ...) #1

attributes #0 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { nobuiltin nounwind }

!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{metadata !2, metadata !2, i64 0}
!2 = metadata !{metadata !"int", metadata !3, i64 0}
!3 = metadata !{metadata !"omnipotent char", metadata !4, i64 0}
!4 = metadata !{metadata !"Simple C/C++ TBAA"}
