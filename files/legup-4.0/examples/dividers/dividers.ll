; ModuleID = 'dividers.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@TEST_INPUTS = internal global [10 x [5 x i32]] [[5 x i32] [i32 89384, i32 30887, i32 92778, i32 36916, i32 47794], [5 x i32] [i32 85387, i32 60493, i32 16650, i32 41422, i32 2363], [5 x i32] [i32 90028, i32 68691, i32 20060, i32 97764, i32 13927], [5 x i32] [i32 80541, i32 83427, i32 89173, i32 55737, i32 5212], [5 x i32] [i32 95369, i32 2568, i32 56430, i32 65783, i32 21531], [5 x i32] [i32 22863, i32 65124, i32 74068, i32 3136, i32 13930], [5 x i32] [i32 79803, i32 34023, i32 23059, i32 33070, i32 98168], [5 x i32] [i32 61394, i32 18457, i32 75012, i32 78043, i32 76230], [5 x i32] [i32 77374, i32 84422, i32 44920, i32 13785, i32 98538], [5 x i32] [i32 75199, i32 94325, i32 98316, i32 64371, i32 38336]], align 4
@.str = private unnamed_addr constant [5 x i8] c"loop\00", align 1
@.str1 = private unnamed_addr constant [15 x i8] c"Result %d: %d\0A\00", align 1
@.str2 = private unnamed_addr constant [9 x i8] c"Sum: %d\0A\00", align 1
@.str3 = private unnamed_addr constant [14 x i8] c"RESULT: PASS\0A\00", align 1
@.str4 = private unnamed_addr constant [14 x i8] c"RESULT: FAIL\0A\00", align 1

; Function Attrs: nounwind
define i32 @main() #0 {
  br label %1

; <label>:1                                       ; preds = %1, %0
  %2 = phi i32 [ 0, %0 ], [ %19, %1 ]
  %sum.01 = phi i32 [ 0, %0 ], [ %18, %1 ]
  %scevgep = getelementptr [10 x [5 x i32]]* @TEST_INPUTS, i32 0, i32 %2, i32 4
  %scevgep2 = getelementptr [10 x [5 x i32]]* @TEST_INPUTS, i32 0, i32 %2, i32 3
  %scevgep3 = getelementptr [10 x [5 x i32]]* @TEST_INPUTS, i32 0, i32 %2, i32 2
  %scevgep4 = getelementptr [10 x [5 x i32]]* @TEST_INPUTS, i32 0, i32 %2, i32 1
  %scevgep5 = getelementptr [10 x [5 x i32]]* @TEST_INPUTS, i32 0, i32 %2, i32 0
  tail call void @__legup_label(i8* getelementptr inbounds ([5 x i8]* @.str, i32 0, i32 0)) #2
  %3 = load volatile i32* %scevgep5, align 4, !tbaa !1
  %4 = udiv i32 %3, 23412
  %5 = load volatile i32* %scevgep4, align 4, !tbaa !1
  %6 = udiv i32 %5, 45064
  %7 = add nuw nsw i32 %6, %4
  %8 = load volatile i32* %scevgep3, align 4, !tbaa !1
  %9 = udiv i32 %8, 2141
  %10 = add nuw nsw i32 %7, %9
  %11 = load volatile i32* %scevgep2, align 4, !tbaa !1
  %12 = udiv i32 %11, 3262
  %13 = add nuw nsw i32 %10, %12
  %14 = load volatile i32* %scevgep, align 4, !tbaa !1
  %15 = udiv i32 %14, 3141
  %16 = add nuw nsw i32 %13, %15
  %17 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([15 x i8]* @.str1, i32 0, i32 0), i32 %2, i32 %16) #2
  %18 = add i32 %16, %sum.01
  %19 = add nsw i32 %2, 1
  %exitcond1 = icmp eq i32 %19, 10
  br i1 %exitcond1, label %20, label %1

; <label>:20                                      ; preds = %1
  %21 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @.str2, i32 0, i32 0), i32 %18) #2
  %22 = icmp eq i32 %18, 577
  br i1 %22, label %23, label %25

; <label>:23                                      ; preds = %20
  %24 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([14 x i8]* @.str3, i32 0, i32 0)) #2
  br label %27

; <label>:25                                      ; preds = %20
  %26 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([14 x i8]* @.str4, i32 0, i32 0)) #2
  br label %27

; <label>:27                                      ; preds = %25, %23
  ret i32 %18
}

declare void @__legup_label(i8*) #1

; Function Attrs: nounwind
declare i32 @printf(i8* nocapture readonly, ...) #0

attributes #0 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { nobuiltin nounwind }

!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{metadata !2, metadata !2, i64 0}
!2 = metadata !{metadata !"int", metadata !3, i64 0}
!3 = metadata !{metadata !"omnipotent char", metadata !4, i64 0}
!4 = metadata !{metadata !"Simple C/C++ TBAA"}
