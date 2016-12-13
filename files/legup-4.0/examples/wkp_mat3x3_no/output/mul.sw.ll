; ModuleID = 'output/mul.sw.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@input = internal unnamed_addr constant [100 x i32] [i32 28, i32 2, i32 17, i32 15, i32 23, i32 25, i32 26, i32 12, i32 24, i32 12, i32 62, i32 17, i32 20, i32 29, i32 63, i32 26, i32 24, i32 12, i32 2, i32 6, i32 11, i32 8, i32 27, i32 12, i32 12, i32 23, i32 62, i32 22, i32 67, i32 35, i32 29, i32 2, i32 22, i32 58, i32 69, i32 67, i32 93, i32 56, i32 11, i32 42, i32 19, i32 23, i32 1, i32 19, i32 84, i32 7, i32 8, i32 24, i32 15, i32 70, i32 13, i32 26, i32 1, i32 80, i32 6, i32 23, i32 62, i32 170, i32 196, i32 181, i32 5, i32 225, i32 284, i32 236, i32 46, i32 5, i32 129, i32 13, i32 257, i32 24, i32 195, i32 282, i32 45, i32 14, i32 267, i32 134, i32 64, i32 43, i32 50, i32 87, i32 8, i32 26, i32 78, i32 88, i32 4, i32 3, i32 51, i32 24, i32 9, i32 32, i32 56, i32 16, i32 68, i32 39, i32 12, i32 26, i32 86, i32 4, i32 39, i32 27], align 4
@.str = private unnamed_addr constant [11 x i8] c"\0ASum: %d\0A\0A\00", align 1
@.str1 = private unnamed_addr constant [6 x i8] c"PASS\0A\00", align 1
@.str2 = private unnamed_addr constant [6 x i8] c"FAIL\0A\00", align 1

define i32 @main() section "_main_section" {
  %first.i = alloca [10 x [10 x i32]], align 4
  %second.i = alloca [10 x [10 x i32]], align 4
  br label %.lr.ph31.i

.lr.ph31.i:                                       ; preds = %.lr.ph31.i, %0
  %i.033.i = phi i32 [ %13, %.lr.ph31.i ], [ 0, %0 ]
  %1 = getelementptr inbounds [100 x i32]* @input, i32 0, i32 %i.033.i
  %2 = load i32* %1, align 4, !tbaa !1
  %3 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 0
  store i32 %2, i32* %3, align 4, !tbaa !1
  %4 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 1
  store i32 %2, i32* %4, align 4, !tbaa !1
  %5 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 2
  store i32 %2, i32* %5, align 4, !tbaa !1
  %6 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 3
  store i32 %2, i32* %6, align 4, !tbaa !1
  %7 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 4
  store i32 %2, i32* %7, align 4, !tbaa !1
  %8 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 5
  store i32 %2, i32* %8, align 4, !tbaa !1
  %9 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 6
  store i32 %2, i32* %9, align 4, !tbaa !1
  %10 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 7
  store i32 %2, i32* %10, align 4, !tbaa !1
  %11 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 8
  store i32 %2, i32* %11, align 4, !tbaa !1
  %12 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.033.i, i32 9
  store i32 %2, i32* %12, align 4, !tbaa !1
  %13 = add nsw i32 %i.033.i, 1
  %exitcond10 = icmp eq i32 %13, 10
  br i1 %exitcond10, label %.lr.ph26.i.preheader, label %.lr.ph31.i

.lr.ph26.i.preheader:                             ; preds = %.lr.ph31.i
  %14 = bitcast [10 x [10 x i32]]* %first.i to i8*
  br label %.lr.ph26.i

.lr.ph26.i:                                       ; preds = %.lr.ph26.i, %.lr.ph26.i.preheader
  %i.128.i = phi i32 [ %27, %.lr.ph26.i ], [ 0, %.lr.ph26.i.preheader ]
  %15 = getelementptr inbounds [100 x i32]* @input, i32 0, i32 %i.128.i
  %16 = load i32* %15, align 4, !tbaa !1
  %17 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 0
  store i32 %16, i32* %17, align 4, !tbaa !1
  %18 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 1
  store i32 %16, i32* %18, align 4, !tbaa !1
  %19 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 2
  store i32 %16, i32* %19, align 4, !tbaa !1
  %20 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 3
  store i32 %16, i32* %20, align 4, !tbaa !1
  %21 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 4
  store i32 %16, i32* %21, align 4, !tbaa !1
  %22 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 5
  store i32 %16, i32* %22, align 4, !tbaa !1
  %23 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 6
  store i32 %16, i32* %23, align 4, !tbaa !1
  %24 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 7
  store i32 %16, i32* %24, align 4, !tbaa !1
  %25 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 8
  store i32 %16, i32* %25, align 4, !tbaa !1
  %26 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.128.i, i32 9
  store i32 %16, i32* %26, align 4, !tbaa !1
  %27 = add nsw i32 %i.128.i, 1
  %exitcond7 = icmp eq i32 %27, 10
  br i1 %exitcond7, label %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i.preheader, label %.lr.ph26.i

.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i.preheader: ; preds = %.lr.ph26.i
  %28 = bitcast [10 x [10 x i32]]* %second.i to i8*
  br label %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i

.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i: ; preds = %._crit_edge10.i, %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i.preheader
  %.lcssa.lcssa3 = phi i32 [ %.lcssa, %._crit_edge10.i ], [ 0, %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i.preheader ]
  %i.211.i = phi i32 [ %71, %._crit_edge10.i ], [ 0, %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i.preheader ]
  %29 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 0
  %.pre = load i32* %29, align 4, !tbaa !1
  %.phi.trans.insert = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 1
  %.pre11 = load i32* %.phi.trans.insert, align 4, !tbaa !1
  %.phi.trans.insert12 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 2
  %.pre13 = load i32* %.phi.trans.insert12, align 4, !tbaa !1
  %.phi.trans.insert14 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 3
  %.pre15 = load i32* %.phi.trans.insert14, align 4, !tbaa !1
  %.phi.trans.insert16 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 4
  %.pre17 = load i32* %.phi.trans.insert16, align 4, !tbaa !1
  %.phi.trans.insert18 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 5
  %.pre19 = load i32* %.phi.trans.insert18, align 4, !tbaa !1
  %.phi.trans.insert20 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 6
  %.pre21 = load i32* %.phi.trans.insert20, align 4, !tbaa !1
  %.phi.trans.insert22 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 7
  %.pre23 = load i32* %.phi.trans.insert22, align 4, !tbaa !1
  %.phi.trans.insert24 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 8
  %.pre25 = load i32* %.phi.trans.insert24, align 4, !tbaa !1
  %.phi.trans.insert26 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.211.i, i32 9
  %.pre27 = load i32* %.phi.trans.insert26, align 4, !tbaa !1
  br label %.lr.ph.i

.lr.ph.i:                                         ; preds = %.lr.ph.i, %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i
  %.lcssa1 = phi i32 [ %.lcssa.lcssa3, %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i ], [ %69, %.lr.ph.i ]
  %d.28.i = phi i32 [ 0, %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i ], [ %70, %.lr.ph.i ]
  %30 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 0, i32 %d.28.i
  %31 = load i32* %30, align 4, !tbaa !1
  %32 = mul nsw i32 %31, %.pre
  %33 = add nsw i32 %32, %.lcssa1
  %34 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 1, i32 %d.28.i
  %35 = load i32* %34, align 4, !tbaa !1
  %36 = mul nsw i32 %35, %.pre11
  %37 = add nsw i32 %36, %33
  %38 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 2, i32 %d.28.i
  %39 = load i32* %38, align 4, !tbaa !1
  %40 = mul nsw i32 %39, %.pre13
  %41 = add nsw i32 %40, %37
  %42 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 3, i32 %d.28.i
  %43 = load i32* %42, align 4, !tbaa !1
  %44 = mul nsw i32 %43, %.pre15
  %45 = add nsw i32 %44, %41
  %46 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 4, i32 %d.28.i
  %47 = load i32* %46, align 4, !tbaa !1
  %48 = mul nsw i32 %47, %.pre17
  %49 = add nsw i32 %48, %45
  %50 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 5, i32 %d.28.i
  %51 = load i32* %50, align 4, !tbaa !1
  %52 = mul nsw i32 %51, %.pre19
  %53 = add nsw i32 %52, %49
  %54 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 6, i32 %d.28.i
  %55 = load i32* %54, align 4, !tbaa !1
  %56 = mul nsw i32 %55, %.pre21
  %57 = add nsw i32 %56, %53
  %58 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 7, i32 %d.28.i
  %59 = load i32* %58, align 4, !tbaa !1
  %60 = mul nsw i32 %59, %.pre23
  %61 = add nsw i32 %60, %57
  %62 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 8, i32 %d.28.i
  %63 = load i32* %62, align 4, !tbaa !1
  %64 = mul nsw i32 %63, %.pre25
  %65 = add nsw i32 %64, %61
  %66 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 9, i32 %d.28.i
  %67 = load i32* %66, align 4, !tbaa !1
  %68 = mul nsw i32 %67, %.pre27
  %69 = add nsw i32 %68, %65
  %70 = add nsw i32 %d.28.i, 1
  %exitcond = icmp eq i32 %70, 10
  br i1 %exitcond, label %._crit_edge10.i, label %.lr.ph.i

._crit_edge10.i:                                  ; preds = %.lr.ph.i
  %.lcssa = phi i32 [ %69, %.lr.ph.i ]
  %71 = add nsw i32 %i.211.i, 1
  %exitcond4 = icmp eq i32 %71, 10
  br i1 %exitcond4, label %mat3x3.exit, label %.preheader.lr.ph..preheader.lr.ph.split_crit_edge.i

mat3x3.exit:                                      ; preds = %._crit_edge10.i
  %.lcssa.lcssa = phi i32 [ %.lcssa, %._crit_edge10.i ]
  %72 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([11 x i8]* @.str, i32 0, i32 0), i32 %.lcssa.lcssa)
  %73 = icmp eq i32 %.lcssa.lcssa, 338560
  br i1 %73, label %74, label %76

; <label>:74                                      ; preds = %mat3x3.exit
  %75 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([6 x i8]* @.str1, i32 0, i32 0))
  br label %78

; <label>:76                                      ; preds = %mat3x3.exit
  %77 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([6 x i8]* @.str2, i32 0, i32 0))
  br label %78

; <label>:78                                      ; preds = %76, %74
  ret i32 0
}

declare i32 @printf(i8*, ...)


!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{metadata !2, metadata !2, i64 0}
!2 = metadata !{metadata !"int", metadata !3, i64 0}
!3 = metadata !{metadata !"omnipotent char", metadata !4, i64 0}
!4 = metadata !{metadata !"Simple C/C++ TBAA"}
