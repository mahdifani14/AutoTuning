; ModuleID = 'output/mul_t.sw.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@input = internal unnamed_addr constant [100 x i32] [i32 28, i32 2, i32 17, i32 15, i32 23, i32 25, i32 26, i32 12, i32 24, i32 12, i32 62, i32 17, i32 20, i32 29, i32 63, i32 26, i32 24, i32 12, i32 2, i32 6, i32 11, i32 8, i32 27, i32 12, i32 12, i32 23, i32 62, i32 22, i32 67, i32 35, i32 29, i32 2, i32 22, i32 58, i32 69, i32 67, i32 93, i32 56, i32 11, i32 42, i32 19, i32 23, i32 1, i32 19, i32 84, i32 7, i32 8, i32 24, i32 15, i32 70, i32 13, i32 26, i32 1, i32 80, i32 6, i32 23, i32 62, i32 170, i32 196, i32 181, i32 5, i32 225, i32 284, i32 236, i32 46, i32 5, i32 129, i32 13, i32 257, i32 24, i32 195, i32 282, i32 45, i32 14, i32 267, i32 134, i32 64, i32 43, i32 50, i32 87, i32 8, i32 26, i32 78, i32 88, i32 4, i32 3, i32 51, i32 24, i32 9, i32 32, i32 56, i32 16, i32 68, i32 39, i32 12, i32 26, i32 86, i32 4, i32 39, i32 27], align 4
@.str = private unnamed_addr constant [11 x i8] c"\0ASum: %d\0A\0A\00", align 1
@.str1 = private unnamed_addr constant [6 x i8] c"PASS\0A\00", align 1
@.str2 = private unnamed_addr constant [6 x i8] c"FAIL\0A\00", align 1

define i32 @main() section "_main_section" {
  %first.i = alloca [10 x [10 x i32]], align 4
  %second.i = alloca [10 x [10 x i32]], align 4
  br label %.lr.ph55.i

.lr.ph55.i:                                       ; preds = %.lr.ph55.i, %0
  %i.057.i = phi i32 [ %13, %.lr.ph55.i ], [ 0, %0 ]
  %1 = getelementptr inbounds [100 x i32]* @input, i32 0, i32 %i.057.i
  %2 = load i32* %1, align 4, !tbaa !1
  %3 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 0
  store i32 %2, i32* %3, align 4, !tbaa !1
  %4 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 1
  store i32 %2, i32* %4, align 4, !tbaa !1
  %5 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 2
  store i32 %2, i32* %5, align 4, !tbaa !1
  %6 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 3
  store i32 %2, i32* %6, align 4, !tbaa !1
  %7 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 4
  store i32 %2, i32* %7, align 4, !tbaa !1
  %8 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 5
  store i32 %2, i32* %8, align 4, !tbaa !1
  %9 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 6
  store i32 %2, i32* %9, align 4, !tbaa !1
  %10 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 7
  store i32 %2, i32* %10, align 4, !tbaa !1
  %11 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 8
  store i32 %2, i32* %11, align 4, !tbaa !1
  %12 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i.057.i, i32 9
  store i32 %2, i32* %12, align 4, !tbaa !1
  %13 = add nsw i32 %i.057.i, 1
  %exitcond15 = icmp eq i32 %13, 10
  br i1 %exitcond15, label %.lr.ph50.i.preheader, label %.lr.ph55.i

.lr.ph50.i.preheader:                             ; preds = %.lr.ph55.i
  %14 = bitcast [10 x [10 x i32]]* %first.i to i8*
  br label %.lr.ph50.i

.lr.ph50.i:                                       ; preds = %.lr.ph50.i, %.lr.ph50.i.preheader
  %i.152.i = phi i32 [ %27, %.lr.ph50.i ], [ 0, %.lr.ph50.i.preheader ]
  %15 = getelementptr inbounds [100 x i32]* @input, i32 0, i32 %i.152.i
  %16 = load i32* %15, align 4, !tbaa !1
  %17 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 0
  store i32 %16, i32* %17, align 4, !tbaa !1
  %18 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 1
  store i32 %16, i32* %18, align 4, !tbaa !1
  %19 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 2
  store i32 %16, i32* %19, align 4, !tbaa !1
  %20 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 3
  store i32 %16, i32* %20, align 4, !tbaa !1
  %21 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 4
  store i32 %16, i32* %21, align 4, !tbaa !1
  %22 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 5
  store i32 %16, i32* %22, align 4, !tbaa !1
  %23 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 6
  store i32 %16, i32* %23, align 4, !tbaa !1
  %24 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 7
  store i32 %16, i32* %24, align 4, !tbaa !1
  %25 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 8
  store i32 %16, i32* %25, align 4, !tbaa !1
  %26 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 %i.152.i, i32 9
  store i32 %16, i32* %26, align 4, !tbaa !1
  %27 = add nsw i32 %i.152.i, 1
  %exitcond12 = icmp eq i32 %27, 10
  br i1 %exitcond12, label %.preheader6.i.preheader, label %.lr.ph50.i

.preheader6.i.preheader:                          ; preds = %.lr.ph50.i
  %28 = bitcast [10 x [10 x i32]]* %second.i to i8*
  br label %.preheader6.i

.preheader6.i:                                    ; preds = %._crit_edge44.i, %.preheader6.i.preheader
  %.lcssa1.lcssa6 = phi i32 [ %.lcssa1, %._crit_edge44.i ], [ 0, %.preheader6.i.preheader ]
  %i1.045.i = phi i32 [ %114, %._crit_edge44.i ], [ 0, %.preheader6.i.preheader ]
  %29 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 0
  %.pre = load i32* %29, align 4, !tbaa !1
  %.phi.trans.insert = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 1
  %.pre16 = load i32* %.phi.trans.insert, align 4, !tbaa !1
  %.phi.trans.insert17 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 2
  %.pre18 = load i32* %.phi.trans.insert17, align 4, !tbaa !1
  %.phi.trans.insert19 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 3
  %.pre20 = load i32* %.phi.trans.insert19, align 4, !tbaa !1
  %.phi.trans.insert21 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 4
  %.pre22 = load i32* %.phi.trans.insert21, align 4, !tbaa !1
  %.phi.trans.insert23 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 5
  %.pre24 = load i32* %.phi.trans.insert23, align 4, !tbaa !1
  %.phi.trans.insert25 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 6
  %.pre26 = load i32* %.phi.trans.insert25, align 4, !tbaa !1
  %.phi.trans.insert27 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 7
  %.pre28 = load i32* %.phi.trans.insert27, align 4, !tbaa !1
  %.phi.trans.insert29 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 8
  %.pre30 = load i32* %.phi.trans.insert29, align 4, !tbaa !1
  %.phi.trans.insert31 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %i1.045.i, i32 9
  %.pre32 = load i32* %.phi.trans.insert31, align 4, !tbaa !1
  br label %.lr.ph31.i

.preheader5.i:                                    ; preds = %.lr.ph31.i
  %.lcssa = phi i32 [ %71, %.lr.ph31.i ]
  %30 = or i32 %i1.045.i, 1
  %31 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 0
  %.pre33 = load i32* %31, align 4, !tbaa !1
  %.phi.trans.insert34 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 1
  %.pre35 = load i32* %.phi.trans.insert34, align 4, !tbaa !1
  %.phi.trans.insert36 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 2
  %.pre37 = load i32* %.phi.trans.insert36, align 4, !tbaa !1
  %.phi.trans.insert38 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 3
  %.pre39 = load i32* %.phi.trans.insert38, align 4, !tbaa !1
  %.phi.trans.insert40 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 4
  %.pre41 = load i32* %.phi.trans.insert40, align 4, !tbaa !1
  %.phi.trans.insert42 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 5
  %.pre43 = load i32* %.phi.trans.insert42, align 4, !tbaa !1
  %.phi.trans.insert44 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 6
  %.pre45 = load i32* %.phi.trans.insert44, align 4, !tbaa !1
  %.phi.trans.insert46 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 7
  %.pre47 = load i32* %.phi.trans.insert46, align 4, !tbaa !1
  %.phi.trans.insert48 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 8
  %.pre49 = load i32* %.phi.trans.insert48, align 4, !tbaa !1
  %.phi.trans.insert50 = getelementptr inbounds [10 x [10 x i32]]* %first.i, i32 0, i32 %30, i32 9
  %.pre51 = load i32* %.phi.trans.insert50, align 4, !tbaa !1
  br label %.lr.ph38.i

.lr.ph31.i:                                       ; preds = %.lr.ph31.i, %.preheader6.i
  %.lcssa2 = phi i32 [ %71, %.lr.ph31.i ], [ %.lcssa1.lcssa6, %.preheader6.i ]
  %d.235.i = phi i32 [ %72, %.lr.ph31.i ], [ 0, %.preheader6.i ]
  %32 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 0, i32 %d.235.i
  %33 = load i32* %32, align 4, !tbaa !1
  %34 = mul nsw i32 %33, %.pre
  %35 = add nsw i32 %34, %.lcssa2
  %36 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 1, i32 %d.235.i
  %37 = load i32* %36, align 4, !tbaa !1
  %38 = mul nsw i32 %37, %.pre16
  %39 = add nsw i32 %38, %35
  %40 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 2, i32 %d.235.i
  %41 = load i32* %40, align 4, !tbaa !1
  %42 = mul nsw i32 %41, %.pre18
  %43 = add nsw i32 %42, %39
  %44 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 3, i32 %d.235.i
  %45 = load i32* %44, align 4, !tbaa !1
  %46 = mul nsw i32 %45, %.pre20
  %47 = add nsw i32 %46, %43
  %48 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 4, i32 %d.235.i
  %49 = load i32* %48, align 4, !tbaa !1
  %50 = mul nsw i32 %49, %.pre22
  %51 = add nsw i32 %50, %47
  %52 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 5, i32 %d.235.i
  %53 = load i32* %52, align 4, !tbaa !1
  %54 = mul nsw i32 %53, %.pre24
  %55 = add nsw i32 %54, %51
  %56 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 6, i32 %d.235.i
  %57 = load i32* %56, align 4, !tbaa !1
  %58 = mul nsw i32 %57, %.pre26
  %59 = add nsw i32 %58, %55
  %60 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 7, i32 %d.235.i
  %61 = load i32* %60, align 4, !tbaa !1
  %62 = mul nsw i32 %61, %.pre28
  %63 = add nsw i32 %62, %59
  %64 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 8, i32 %d.235.i
  %65 = load i32* %64, align 4, !tbaa !1
  %66 = mul nsw i32 %65, %.pre30
  %67 = add nsw i32 %66, %63
  %68 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 9, i32 %d.235.i
  %69 = load i32* %68, align 4, !tbaa !1
  %70 = mul nsw i32 %69, %.pre32
  %71 = add nsw i32 %70, %67
  %72 = add nsw i32 %d.235.i, 1
  %exitcond = icmp eq i32 %72, 10
  br i1 %exitcond, label %.preheader5.i, label %.lr.ph31.i

.lr.ph38.i:                                       ; preds = %.lr.ph38.i, %.preheader5.i
  %.lcssa14 = phi i32 [ %.lcssa, %.preheader5.i ], [ %112, %.lr.ph38.i ]
  %d.342.i = phi i32 [ 0, %.preheader5.i ], [ %113, %.lr.ph38.i ]
  %73 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 0, i32 %d.342.i
  %74 = load i32* %73, align 4, !tbaa !1
  %75 = mul nsw i32 %74, %.pre33
  %76 = add nsw i32 %75, %.lcssa14
  %77 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 1, i32 %d.342.i
  %78 = load i32* %77, align 4, !tbaa !1
  %79 = mul nsw i32 %78, %.pre35
  %80 = add nsw i32 %79, %76
  %81 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 2, i32 %d.342.i
  %82 = load i32* %81, align 4, !tbaa !1
  %83 = mul nsw i32 %82, %.pre37
  %84 = add nsw i32 %83, %80
  %85 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 3, i32 %d.342.i
  %86 = load i32* %85, align 4, !tbaa !1
  %87 = mul nsw i32 %86, %.pre39
  %88 = add nsw i32 %87, %84
  %89 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 4, i32 %d.342.i
  %90 = load i32* %89, align 4, !tbaa !1
  %91 = mul nsw i32 %90, %.pre41
  %92 = add nsw i32 %91, %88
  %93 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 5, i32 %d.342.i
  %94 = load i32* %93, align 4, !tbaa !1
  %95 = mul nsw i32 %94, %.pre43
  %96 = add nsw i32 %95, %92
  %97 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 6, i32 %d.342.i
  %98 = load i32* %97, align 4, !tbaa !1
  %99 = mul nsw i32 %98, %.pre45
  %100 = add nsw i32 %99, %96
  %101 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 7, i32 %d.342.i
  %102 = load i32* %101, align 4, !tbaa !1
  %103 = mul nsw i32 %102, %.pre47
  %104 = add nsw i32 %103, %100
  %105 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 8, i32 %d.342.i
  %106 = load i32* %105, align 4, !tbaa !1
  %107 = mul nsw i32 %106, %.pre49
  %108 = add nsw i32 %107, %104
  %109 = getelementptr inbounds [10 x [10 x i32]]* %second.i, i32 0, i32 9, i32 %d.342.i
  %110 = load i32* %109, align 4, !tbaa !1
  %111 = mul nsw i32 %110, %.pre51
  %112 = add nsw i32 %111, %108
  %113 = add nsw i32 %d.342.i, 1
  %exitcond9 = icmp eq i32 %113, 10
  br i1 %exitcond9, label %._crit_edge44.i, label %.lr.ph38.i

._crit_edge44.i:                                  ; preds = %.lr.ph38.i
  %.lcssa1 = phi i32 [ %112, %.lr.ph38.i ]
  %114 = add nsw i32 %i1.045.i, 2
  %115 = icmp sgt i32 %114, 8
  br i1 %115, label %mat3x3.exit, label %.preheader6.i

mat3x3.exit:                                      ; preds = %._crit_edge44.i
  %.lcssa1.lcssa = phi i32 [ %.lcssa1, %._crit_edge44.i ]
  %116 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([11 x i8]* @.str, i32 0, i32 0), i32 %.lcssa1.lcssa)
  %117 = icmp eq i32 %.lcssa1.lcssa, 338560
  br i1 %117, label %118, label %120

; <label>:118                                     ; preds = %mat3x3.exit
  %119 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([6 x i8]* @.str1, i32 0, i32 0))
  br label %122

; <label>:120                                     ; preds = %mat3x3.exit
  %121 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([6 x i8]* @.str2, i32 0, i32 0))
  br label %122

; <label>:122                                     ; preds = %120, %118
  ret i32 0
}

declare i32 @printf(i8*, ...)


!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{metadata !2, metadata !2, i64 0}
!2 = metadata !{metadata !"int", metadata !3, i64 0}
!3 = metadata !{metadata !"omnipotent char", metadata !4, i64 0}
!4 = metadata !{metadata !"Simple C/C++ TBAA"}
