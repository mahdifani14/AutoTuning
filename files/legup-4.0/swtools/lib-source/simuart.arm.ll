; ModuleID = 'simuart.arm.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@i2h.hex = internal global [9 x i8] zeroinitializer, align 1
@.str = private unnamed_addr constant [2 x i8] c"0\00", align 1
@l2h.hex = internal global [17 x i8] zeroinitializer, align 1
@itoa.buf = internal unnamed_addr global [11 x i8] zeroinitializer, align 1
@itoa.out = internal global [11 x i8] zeroinitializer, align 1
@utoa.buf = internal unnamed_addr global [11 x i8] zeroinitializer, align 1
@utoa.out = internal global [11 x i8] zeroinitializer, align 1
@ltoa.buf = internal unnamed_addr global [25 x i8] zeroinitializer, align 1
@ltoa.out = internal global [25 x i8] zeroinitializer, align 1
@.str1 = private unnamed_addr constant [33 x i8] c"program returned %d exit status\0A\00", align 1

; Function Attrs: nounwind
define void @printc_uart(i8 signext %c) #0 {
  %1 = sext i8 %c to i32
  store volatile i32 %1, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  ret void
}

; Function Attrs: nounwind
define void @print_uart(i8* nocapture readonly %ptr) #0 {
  %1 = load i8* %ptr, align 1, !tbaa !5
  %2 = icmp eq i8 %1, 0
  br i1 %2, label %._crit_edge, label %.lr.ph.preheader

.lr.ph.preheader:                                 ; preds = %0
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %3 = phi i8 [ %6, %.lr.ph ], [ %1, %.lr.ph.preheader ]
  %.01 = phi i8* [ %4, %.lr.ph ], [ %ptr, %.lr.ph.preheader ]
  %4 = getelementptr inbounds i8* %.01, i32 1
  %5 = sext i8 %3 to i32
  store volatile i32 %5, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %6 = load i8* %4, align 1, !tbaa !5
  %7 = icmp eq i8 %6, 0
  br i1 %7, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %0
  ret void
}

; Function Attrs: nounwind readnone
define signext i8 @_i2h(i32 %i) #1 {
  %1 = icmp slt i32 %i, 10
  %.0.in.v = select i1 %1, i32 48, i32 87
  %.0.in = add i32 %.0.in.v, %i
  %.0 = trunc i32 %.0.in to i8
  ret i8 %.0
}

; Function Attrs: nounwind readnone
define signext i8 @_i2H(i32 %i) #1 {
  %1 = icmp slt i32 %i, 10
  %.0.in.v = select i1 %1, i32 48, i32 55
  %.0.in = add i32 %.0.in.v, %i
  %.0 = trunc i32 %.0.in to i8
  ret i8 %.0
}

; Function Attrs: nounwind
define i8* @i2h(i32 %i, i32 %caps) #0 {
  %thex = alloca [9 x i8], align 1
  %1 = icmp eq i32 %caps, 0
  %_i2h._i2H = select i1 %1, i8 (i32)* @_i2h, i8 (i32)* @_i2H
  %2 = icmp eq i32 %i, 0
  br i1 %2, label %.loopexit, label %.lr.ph5.preheader

.lr.ph5.preheader:                                ; preds = %0
  br label %.lr.ph5

.lr.ph5:                                          ; preds = %.lr.ph5, %.lr.ph5.preheader
  %c.04 = phi i32 [ %5, %.lr.ph5 ], [ 0, %.lr.ph5.preheader ]
  %.013 = phi i32 [ %7, %.lr.ph5 ], [ %i, %.lr.ph5.preheader ]
  %3 = and i32 %.013, 15
  %4 = tail call signext i8 %_i2h._i2H(i32 %3) #4
  %5 = add nsw i32 %c.04, 1
  %6 = getelementptr inbounds [9 x i8]* %thex, i32 0, i32 %c.04
  store i8 %4, i8* %6, align 1, !tbaa !5
  %7 = lshr i32 %.013, 4
  %8 = icmp eq i32 %7, 0
  br i1 %8, label %._crit_edge, label %.lr.ph5

._crit_edge:                                      ; preds = %.lr.ph5
  %.lcssa = phi i32 [ %5, %.lr.ph5 ]
  %c.04.lcssa = phi i32 [ %c.04, %.lr.ph5 ]
  %9 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa
  store i8 0, i8* %9, align 1, !tbaa !5
  %10 = icmp sgt i32 %c.04.lcssa, -1
  br i1 %10, label %.lr.ph.preheader, label %.loopexit

.lr.ph.preheader:                                 ; preds = %._crit_edge
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %.in = phi i32 [ %11, %.lr.ph ], [ %.lcssa, %.lr.ph.preheader ]
  %.12 = phi i32 [ %14, %.lr.ph ], [ 0, %.lr.ph.preheader ]
  %11 = add nsw i32 %.in, -1
  %12 = getelementptr inbounds [9 x i8]* %thex, i32 0, i32 %11
  %13 = load i8* %12, align 1, !tbaa !5
  %14 = add i32 %.12, 1
  %15 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12
  store i8 %13, i8* %15, align 1, !tbaa !5
  %exitcond = icmp eq i32 %14, %.lcssa
  br i1 %exitcond, label %.loopexit.loopexit, label %.lr.ph

.loopexit.loopexit:                               ; preds = %.lr.ph
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %._crit_edge, %0
  %.0 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %0 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %.loopexit.loopexit ]
  ret i8* %.0
}

; Function Attrs: nounwind
define i8* @l2h(i64 %i, i32 %caps) #0 {
  %thex = alloca [17 x i8], align 1
  %1 = icmp eq i32 %caps, 0
  %_i2h._i2H = select i1 %1, i8 (i32)* @_i2h, i8 (i32)* @_i2H
  %2 = icmp eq i64 %i, 0
  br i1 %2, label %.loopexit, label %.lr.ph5.preheader

.lr.ph5.preheader:                                ; preds = %0
  br label %.lr.ph5

.lr.ph5:                                          ; preds = %.lr.ph5, %.lr.ph5.preheader
  %c.04 = phi i32 [ %5, %.lr.ph5 ], [ 0, %.lr.ph5.preheader ]
  %.013 = phi i64 [ %7, %.lr.ph5 ], [ %i, %.lr.ph5.preheader ]
  %.01.tr = trunc i64 %.013 to i32
  %3 = and i32 %.01.tr, 15
  %4 = tail call signext i8 %_i2h._i2H(i32 %3) #4
  %5 = add nsw i32 %c.04, 1
  %6 = getelementptr inbounds [17 x i8]* %thex, i32 0, i32 %c.04
  store i8 %4, i8* %6, align 1, !tbaa !5
  %7 = lshr i64 %.013, 4
  %8 = icmp eq i64 %7, 0
  br i1 %8, label %._crit_edge, label %.lr.ph5

._crit_edge:                                      ; preds = %.lr.ph5
  %.lcssa = phi i32 [ %5, %.lr.ph5 ]
  %c.04.lcssa = phi i32 [ %c.04, %.lr.ph5 ]
  %9 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa
  store i8 0, i8* %9, align 1, !tbaa !5
  %10 = icmp sgt i32 %c.04.lcssa, -1
  br i1 %10, label %.lr.ph.preheader, label %.loopexit

.lr.ph.preheader:                                 ; preds = %._crit_edge
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %.in = phi i32 [ %11, %.lr.ph ], [ %.lcssa, %.lr.ph.preheader ]
  %.12 = phi i64 [ %14, %.lr.ph ], [ 0, %.lr.ph.preheader ]
  %11 = add nsw i32 %.in, -1
  %12 = getelementptr inbounds [17 x i8]* %thex, i32 0, i32 %11
  %13 = load i8* %12, align 1, !tbaa !5
  %14 = add i64 %.12, 1
  %15 = trunc i64 %.12 to i32
  %16 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %15
  store i8 %13, i8* %16, align 1, !tbaa !5
  %17 = icmp sgt i32 %11, 0
  br i1 %17, label %.lr.ph, label %.loopexit.loopexit

.loopexit.loopexit:                               ; preds = %.lr.ph
  br label %.loopexit

.loopexit:                                        ; preds = %.loopexit.loopexit, %._crit_edge, %0
  %.0 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %0 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %.loopexit.loopexit ]
  ret i8* %.0
}

; Function Attrs: nounwind
define i8* @itoa(i32 %num) #0 {
  %1 = icmp slt i32 %num, 0
  br i1 %1, label %2, label %4

; <label>:2                                       ; preds = %0
  %3 = sub i32 0, %num
  br label %.preheader27

; <label>:4                                       ; preds = %0
  %5 = icmp eq i32 %num, 0
  br i1 %5, label %64, label %.preheader27

.preheader27:                                     ; preds = %4, %2
  %.0 = phi i32 [ %3, %2 ], [ %num, %4 ]
  %neg.0 = phi i32 [ 1, %2 ], [ 0, %4 ]
  store i8 0, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 10), align 1, !tbaa !5
  %6 = srem i32 %.0, 10
  %7 = add nsw i32 %6, 48
  %8 = trunc i32 %7 to i8
  store i8 %8, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 9), align 1, !tbaa !5
  %9 = sdiv i32 %.0, 10
  %10 = srem i32 %9, 10
  %11 = add nsw i32 %10, 48
  %12 = trunc i32 %11 to i8
  store i8 %12, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 8), align 1, !tbaa !5
  %13 = sdiv i32 %.0, 100
  %14 = srem i32 %13, 10
  %15 = add nsw i32 %14, 48
  %16 = trunc i32 %15 to i8
  store i8 %16, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 7), align 1, !tbaa !5
  %17 = sdiv i32 %.0, 1000
  %18 = srem i32 %17, 10
  %19 = add nsw i32 %18, 48
  %20 = trunc i32 %19 to i8
  store i8 %20, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 6), align 1, !tbaa !5
  %21 = sdiv i32 %.0, 10000
  %22 = srem i32 %21, 10
  %23 = add nsw i32 %22, 48
  %24 = trunc i32 %23 to i8
  store i8 %24, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 5), align 1, !tbaa !5
  %25 = sdiv i32 %.0, 100000
  %26 = srem i32 %25, 10
  %27 = add nsw i32 %26, 48
  %28 = trunc i32 %27 to i8
  store i8 %28, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 4), align 1, !tbaa !5
  %29 = sdiv i32 %.0, 1000000
  %30 = srem i32 %29, 10
  %31 = add nsw i32 %30, 48
  %32 = trunc i32 %31 to i8
  store i8 %32, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 3), align 1, !tbaa !5
  %33 = sdiv i32 %.0, 10000000
  %34 = srem i32 %33, 10
  %35 = add nsw i32 %34, 48
  %36 = trunc i32 %35 to i8
  store i8 %36, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 2), align 1, !tbaa !5
  %37 = sdiv i32 %.0, 100000000
  %38 = srem i32 %37, 10
  %39 = add nsw i32 %38, 48
  %40 = trunc i32 %39 to i8
  store i8 %40, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 1), align 1, !tbaa !5
  %41 = sdiv i32 %.0, 1000000000
  %42 = srem i32 %41, 10
  %43 = add nsw i32 %42, 48
  %44 = trunc i32 %43 to i8
  store i8 %44, i8* getelementptr inbounds ([11 x i8]* @itoa.buf, i32 0, i32 0), align 1, !tbaa !5
  br label %47

; <label>:45                                      ; preds = %47
  %46 = icmp slt i32 %50, 10
  br i1 %46, label %._crit_edge8, label %51

._crit_edge8:                                     ; preds = %45
  %.phi.trans.insert = getelementptr inbounds [11 x i8]* @itoa.buf, i32 0, i32 %50
  %.pre = load i8* %.phi.trans.insert, align 1, !tbaa !5
  br label %47

; <label>:47                                      ; preds = %._crit_edge8, %.preheader27
  %48 = phi i8 [ %44, %.preheader27 ], [ %.pre, %._crit_edge8 ]
  %i.14 = phi i32 [ 0, %.preheader27 ], [ %50, %._crit_edge8 ]
  %49 = icmp eq i8 %48, 48
  %50 = add nsw i32 %i.14, 1
  br i1 %49, label %45, label %51

; <label>:51                                      ; preds = %47, %45
  %i.1.lcssa = phi i32 [ %i.14, %47 ], [ %50, %45 ]
  %52 = icmp eq i32 %neg.0, 0
  br i1 %52, label %.preheader, label %53

; <label>:53                                      ; preds = %51
  store i8 45, i8* getelementptr inbounds ([11 x i8]* @itoa.out, i32 0, i32 0), align 1, !tbaa !5
  br label %.preheader

.preheader:                                       ; preds = %53, %51
  %54 = sub i32 10, %i.1.lcssa
  %55 = icmp sgt i32 %54, 0
  br i1 %55, label %.lr.ph.preheader, label %._crit_edge

.lr.ph.preheader:                                 ; preds = %.preheader
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %j.03 = phi i32 [ %61, %.lr.ph ], [ 0, %.lr.ph.preheader ]
  %56 = add nsw i32 %j.03, %i.1.lcssa
  %57 = getelementptr inbounds [11 x i8]* @itoa.buf, i32 0, i32 %56
  %58 = load i8* %57, align 1, !tbaa !5
  %59 = add nsw i32 %j.03, %neg.0
  %60 = getelementptr inbounds [11 x i8]* @itoa.out, i32 0, i32 %59
  store i8 %58, i8* %60, align 1, !tbaa !5
  %61 = add nsw i32 %j.03, 1
  %exitcond = icmp eq i32 %61, %54
  br i1 %exitcond, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %.preheader
  %j.0.lcssa = phi i32 [ 0, %.preheader ], [ %54, %._crit_edge.loopexit ]
  %62 = add nsw i32 %j.0.lcssa, %neg.0
  %63 = getelementptr inbounds [11 x i8]* @itoa.out, i32 0, i32 %62
  store i8 0, i8* %63, align 1, !tbaa !5
  br label %64

; <label>:64                                      ; preds = %._crit_edge, %4
  %.01 = phi i8* [ getelementptr inbounds ([11 x i8]* @itoa.out, i32 0, i32 0), %._crit_edge ], [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %4 ]
  ret i8* %.01
}

; Function Attrs: nounwind
define i8* @utoa(i32 %num) #0 {
  %1 = icmp eq i32 %num, 0
  br i1 %1, label %55, label %.preheader27

.preheader27:                                     ; preds = %0
  store i8 0, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 10), align 1, !tbaa !5
  %2 = urem i32 %num, 10
  %3 = or i32 %2, 48
  %4 = trunc i32 %3 to i8
  store i8 %4, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 9), align 1, !tbaa !5
  %5 = udiv i32 %num, 10
  %6 = urem i32 %5, 10
  %7 = or i32 %6, 48
  %8 = trunc i32 %7 to i8
  store i8 %8, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 8), align 1, !tbaa !5
  %9 = udiv i32 %num, 100
  %10 = urem i32 %9, 10
  %11 = or i32 %10, 48
  %12 = trunc i32 %11 to i8
  store i8 %12, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 7), align 1, !tbaa !5
  %13 = udiv i32 %num, 1000
  %14 = urem i32 %13, 10
  %15 = or i32 %14, 48
  %16 = trunc i32 %15 to i8
  store i8 %16, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 6), align 1, !tbaa !5
  %17 = udiv i32 %num, 10000
  %18 = urem i32 %17, 10
  %19 = or i32 %18, 48
  %20 = trunc i32 %19 to i8
  store i8 %20, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 5), align 1, !tbaa !5
  %21 = udiv i32 %num, 100000
  %22 = urem i32 %21, 10
  %23 = or i32 %22, 48
  %24 = trunc i32 %23 to i8
  store i8 %24, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 4), align 1, !tbaa !5
  %25 = udiv i32 %num, 1000000
  %26 = urem i32 %25, 10
  %27 = or i32 %26, 48
  %28 = trunc i32 %27 to i8
  store i8 %28, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 3), align 1, !tbaa !5
  %29 = udiv i32 %num, 10000000
  %30 = urem i32 %29, 10
  %31 = or i32 %30, 48
  %32 = trunc i32 %31 to i8
  store i8 %32, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 2), align 1, !tbaa !5
  %33 = udiv i32 %num, 100000000
  %34 = urem i32 %33, 10
  %35 = or i32 %34, 48
  %36 = trunc i32 %35 to i8
  store i8 %36, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 1), align 1, !tbaa !5
  %37 = udiv i32 %num, 1000000000
  %38 = urem i32 %37, 10
  %39 = or i32 %38, 48
  %40 = trunc i32 %39 to i8
  store i8 %40, i8* getelementptr inbounds ([11 x i8]* @utoa.buf, i32 0, i32 0), align 1, !tbaa !5
  br label %45

; <label>:41                                      ; preds = %45
  %42 = icmp slt i32 %48, 10
  br i1 %42, label %._crit_edge8, label %.preheader

._crit_edge8:                                     ; preds = %41
  %.phi.trans.insert = getelementptr inbounds [11 x i8]* @utoa.buf, i32 0, i32 %48
  %.pre = load i8* %.phi.trans.insert, align 1, !tbaa !5
  br label %45

.preheader:                                       ; preds = %45, %41
  %i.1.lcssa = phi i32 [ %i.14, %45 ], [ %48, %41 ]
  %43 = sub i32 10, %i.1.lcssa
  %44 = icmp sgt i32 %43, 0
  br i1 %44, label %.lr.ph.preheader, label %._crit_edge

.lr.ph.preheader:                                 ; preds = %.preheader
  br label %.lr.ph

; <label>:45                                      ; preds = %._crit_edge8, %.preheader27
  %46 = phi i8 [ %40, %.preheader27 ], [ %.pre, %._crit_edge8 ]
  %i.14 = phi i32 [ 0, %.preheader27 ], [ %48, %._crit_edge8 ]
  %47 = icmp eq i8 %46, 48
  %48 = add nsw i32 %i.14, 1
  br i1 %47, label %41, label %.preheader

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %j.03 = phi i32 [ %53, %.lr.ph ], [ 0, %.lr.ph.preheader ]
  %49 = add nsw i32 %j.03, %i.1.lcssa
  %50 = getelementptr inbounds [11 x i8]* @utoa.buf, i32 0, i32 %49
  %51 = load i8* %50, align 1, !tbaa !5
  %52 = getelementptr inbounds [11 x i8]* @utoa.out, i32 0, i32 %j.03
  store i8 %51, i8* %52, align 1, !tbaa !5
  %53 = add nsw i32 %j.03, 1
  %exitcond = icmp eq i32 %53, %43
  br i1 %exitcond, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %.preheader
  %j.0.lcssa = phi i32 [ 0, %.preheader ], [ %43, %._crit_edge.loopexit ]
  %54 = getelementptr inbounds [11 x i8]* @utoa.out, i32 0, i32 %j.0.lcssa
  store i8 0, i8* %54, align 1, !tbaa !5
  br label %55

; <label>:55                                      ; preds = %._crit_edge, %0
  %.01 = phi i8* [ getelementptr inbounds ([11 x i8]* @utoa.out, i32 0, i32 0), %._crit_edge ], [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %0 ]
  ret i8* %.01
}

; Function Attrs: nounwind
define i8* @ltoa(i64 %num) #0 {
  %1 = icmp slt i64 %num, 0
  br i1 %1, label %2, label %4

; <label>:2                                       ; preds = %0
  %3 = sub i64 0, %num
  br label %6

; <label>:4                                       ; preds = %0
  %5 = icmp eq i64 %num, 0
  br i1 %5, label %34, label %6

; <label>:6                                       ; preds = %4, %2
  %.0 = phi i64 [ %3, %2 ], [ %num, %4 ]
  %neg.0 = phi i32 [ 1, %2 ], [ 0, %4 ]
  store i8 0, i8* getelementptr inbounds ([25 x i8]* @ltoa.buf, i32 0, i32 24), align 1, !tbaa !5
  br label %7

; <label>:7                                       ; preds = %7, %6
  %i.06 = phi i32 [ 23, %6 ], [ %13, %7 ]
  %.15 = phi i64 [ %.0, %6 ], [ %12, %7 ]
  %8 = srem i64 %.15, 10
  %9 = add nsw i64 %8, 48
  %10 = trunc i64 %9 to i8
  %11 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %i.06
  store i8 %10, i8* %11, align 1, !tbaa !5
  %12 = sdiv i64 %.15, 10
  %13 = add nsw i32 %i.06, -1
  %14 = icmp sgt i32 %i.06, 0
  br i1 %14, label %7, label %.preheader2.preheader

.preheader2.preheader:                            ; preds = %7
  br label %.preheader2

; <label>:15                                      ; preds = %.preheader2
  %16 = icmp slt i32 %20, 24
  br i1 %16, label %.preheader2, label %21

.preheader2:                                      ; preds = %15, %.preheader2.preheader
  %i.14 = phi i32 [ %20, %15 ], [ 0, %.preheader2.preheader ]
  %17 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %i.14
  %18 = load i8* %17, align 1, !tbaa !5
  %19 = icmp eq i8 %18, 48
  %20 = add nsw i32 %i.14, 1
  br i1 %19, label %15, label %21

; <label>:21                                      ; preds = %.preheader2, %15
  %i.1.lcssa = phi i32 [ %i.14, %.preheader2 ], [ %20, %15 ]
  %22 = icmp eq i32 %neg.0, 0
  br i1 %22, label %.preheader, label %23

; <label>:23                                      ; preds = %21
  store i8 45, i8* getelementptr inbounds ([25 x i8]* @ltoa.out, i32 0, i32 0), align 1, !tbaa !5
  br label %.preheader

.preheader:                                       ; preds = %23, %21
  %24 = sub i32 24, %i.1.lcssa
  %25 = icmp sgt i32 %24, 0
  br i1 %25, label %.lr.ph.preheader, label %._crit_edge

.lr.ph.preheader:                                 ; preds = %.preheader
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %j.03 = phi i32 [ %31, %.lr.ph ], [ 0, %.lr.ph.preheader ]
  %26 = add nsw i32 %j.03, %i.1.lcssa
  %27 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %26
  %28 = load i8* %27, align 1, !tbaa !5
  %29 = add nsw i32 %j.03, %neg.0
  %30 = getelementptr inbounds [25 x i8]* @ltoa.out, i32 0, i32 %29
  store i8 %28, i8* %30, align 1, !tbaa !5
  %31 = add nsw i32 %j.03, 1
  %exitcond = icmp eq i32 %31, %24
  br i1 %exitcond, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %.preheader
  %j.0.lcssa = phi i32 [ 0, %.preheader ], [ %24, %._crit_edge.loopexit ]
  %32 = add nsw i32 %j.0.lcssa, %neg.0
  %33 = getelementptr inbounds [25 x i8]* @ltoa.out, i32 0, i32 %32
  store i8 0, i8* %33, align 1, !tbaa !5
  br label %34

; <label>:34                                      ; preds = %._crit_edge, %4
  %.01 = phi i8* [ getelementptr inbounds ([25 x i8]* @ltoa.out, i32 0, i32 0), %._crit_edge ], [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %4 ]
  ret i8* %.01
}

; Function Attrs: nounwind
define i32 @puts(i8* nocapture readonly %fmt) #0 {
  %1 = load i8* %fmt, align 1, !tbaa !5
  %2 = icmp eq i8 %1, 0
  br i1 %2, label %._crit_edge, label %.lr.ph.preheader

.lr.ph.preheader:                                 ; preds = %0
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %3 = phi i8 [ %7, %.lr.ph ], [ %1, %.lr.ph.preheader ]
  %k.01 = phi i32 [ %5, %.lr.ph ], [ 0, %.lr.ph.preheader ]
  %4 = sext i8 %3 to i32
  store volatile i32 %4, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %5 = add nsw i32 %k.01, 1
  %6 = getelementptr inbounds i8* %fmt, i32 %5
  %7 = load i8* %6, align 1, !tbaa !5
  %8 = icmp eq i8 %7, 0
  br i1 %8, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %0
  store volatile i32 10, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  ret i32 0
}

; Function Attrs: nounwind
define i32 @printf(i8* nocapture readonly %fmt, ...) #0 {
  %thex.i36 = alloca [17 x i8], align 1
  %thex.i = alloca [9 x i8], align 1
  %arg = alloca i8*, align 4
  %1 = bitcast i8** %arg to i8*
  call void @llvm.va_start(i8* %1)
  %2 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 0
  %3 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 0
  br label %4

; <label>:4                                       ; preds = %.backedge, %0
  %k.0 = phi i32 [ 0, %0 ], [ %k.0.be, %.backedge ]
  %5 = getelementptr inbounds i8* %fmt, i32 %k.0
  %6 = load i8* %5, align 1, !tbaa !5
  switch i8 %6, label %302 [
    i8 0, label %304
    i8 37, label %.preheader.preheader
  ]

.preheader.preheader:                             ; preds = %4
  br label %.preheader

.preheader:                                       ; preds = %.preheader, %.preheader.preheader
  %k.1.in = phi i32 [ %k.1, %.preheader ], [ %k.0, %.preheader.preheader ]
  %k.1 = add nsw i32 %k.1.in, 1
  %7 = getelementptr inbounds i8* %fmt, i32 %k.1
  %8 = load i8* %7, align 1, !tbaa !5
  %.off = add i8 %8, -48
  %9 = icmp ult i8 %.off, 10
  br i1 %9, label %.preheader, label %10

; <label>:10                                      ; preds = %.preheader
  %.lcssa = phi i8 [ %8, %.preheader ]
  %k.1.lcssa = phi i32 [ %k.1, %.preheader ]
  %k.1.in.lcssa = phi i32 [ %k.1.in, %.preheader ]
  %11 = icmp eq i8 %.lcssa, 108
  %12 = add nsw i32 %k.1.in.lcssa, 2
  %.k.1 = select i1 %11, i32 %12, i32 %k.1.lcssa
  %13 = getelementptr inbounds i8* %fmt, i32 %.k.1
  %14 = load i8* %13, align 1, !tbaa !5
  %15 = sext i8 %14 to i32
  switch i32 %15, label %299 [
    i32 100, label %16
    i32 117, label %29
    i32 115, label %42
    i32 99, label %54
    i32 120, label %60
    i32 88, label %86
    i32 108, label %112
    i32 104, label %232
    i32 37, label %298
  ]

; <label>:16                                      ; preds = %10
  %17 = load i8** %arg, align 4
  %18 = bitcast i8* %17 to i32*
  %19 = getelementptr i8* %17, i32 4
  store i8* %19, i8** %arg, align 4
  %20 = load i32* %18, align 4
  %21 = call i8* @itoa(i32 %20) #5
  %22 = load i8* %21, align 1, !tbaa !5
  %23 = icmp eq i8 %22, 0
  br i1 %23, label %.backedge, label %.lr.ph.i.preheader

.lr.ph.i.preheader:                               ; preds = %16
  br label %.lr.ph.i

.lr.ph.i:                                         ; preds = %.lr.ph.i, %.lr.ph.i.preheader
  %24 = phi i8 [ %27, %.lr.ph.i ], [ %22, %.lr.ph.i.preheader ]
  %.01.i = phi i8* [ %25, %.lr.ph.i ], [ %21, %.lr.ph.i.preheader ]
  %25 = getelementptr inbounds i8* %.01.i, i32 1
  %26 = sext i8 %24 to i32
  store volatile i32 %26, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %27 = load i8* %25, align 1, !tbaa !5
  %28 = icmp eq i8 %27, 0
  br i1 %28, label %.backedge.loopexit, label %.lr.ph.i

; <label>:29                                      ; preds = %10
  %30 = load i8** %arg, align 4
  %31 = bitcast i8* %30 to i32*
  %32 = getelementptr i8* %30, i32 4
  store i8* %32, i8** %arg, align 4
  %33 = load i32* %31, align 4
  %34 = call i8* @utoa(i32 %33) #5
  %35 = load i8* %34, align 1, !tbaa !5
  %36 = icmp eq i8 %35, 0
  br i1 %36, label %.backedge, label %.lr.ph.i29.preheader

.lr.ph.i29.preheader:                             ; preds = %29
  br label %.lr.ph.i29

.lr.ph.i29:                                       ; preds = %.lr.ph.i29, %.lr.ph.i29.preheader
  %37 = phi i8 [ %40, %.lr.ph.i29 ], [ %35, %.lr.ph.i29.preheader ]
  %.01.i28 = phi i8* [ %38, %.lr.ph.i29 ], [ %34, %.lr.ph.i29.preheader ]
  %38 = getelementptr inbounds i8* %.01.i28, i32 1
  %39 = sext i8 %37 to i32
  store volatile i32 %39, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %40 = load i8* %38, align 1, !tbaa !5
  %41 = icmp eq i8 %40, 0
  br i1 %41, label %.backedge.loopexit153, label %.lr.ph.i29

; <label>:42                                      ; preds = %10
  %43 = load i8** %arg, align 4
  %44 = bitcast i8* %43 to i8**
  %45 = getelementptr i8* %43, i32 4
  store i8* %45, i8** %arg, align 4
  %46 = load i8** %44, align 4
  %47 = load i8* %46, align 1, !tbaa !5
  %48 = icmp eq i8 %47, 0
  br i1 %48, label %.backedge, label %.lr.ph.i112.preheader

.lr.ph.i112.preheader:                            ; preds = %42
  br label %.lr.ph.i112

.lr.ph.i112:                                      ; preds = %.lr.ph.i112, %.lr.ph.i112.preheader
  %49 = phi i8 [ %52, %.lr.ph.i112 ], [ %47, %.lr.ph.i112.preheader ]
  %.01.i111 = phi i8* [ %50, %.lr.ph.i112 ], [ %46, %.lr.ph.i112.preheader ]
  %50 = getelementptr inbounds i8* %.01.i111, i32 1
  %51 = sext i8 %49 to i32
  store volatile i32 %51, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %52 = load i8* %50, align 1, !tbaa !5
  %53 = icmp eq i8 %52, 0
  br i1 %53, label %.backedge.loopexit154, label %.lr.ph.i112

; <label>:54                                      ; preds = %10
  %55 = load i8** %arg, align 4
  %56 = bitcast i8* %55 to i32*
  %57 = getelementptr i8* %55, i32 4
  store i8* %57, i8** %arg, align 4
  %58 = load i32* %56, align 4
  %sext = shl i32 %58, 24
  %59 = ashr exact i32 %sext, 24
  store volatile i32 %59, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  br label %.backedge

; <label>:60                                      ; preds = %10
  %61 = load i8** %arg, align 4
  %62 = bitcast i8* %61 to i32*
  %63 = getelementptr i8* %61, i32 4
  store i8* %63, i8** %arg, align 4
  %64 = load i32* %62, align 4
  %65 = icmp eq i32 %64, 0
  br i1 %65, label %i2h.exit107, label %.lr.ph5.i100.preheader

.lr.ph5.i100.preheader:                           ; preds = %60
  br label %.lr.ph5.i100

.lr.ph5.i100:                                     ; preds = %.lr.ph5.i100, %.lr.ph5.i100.preheader
  %c.04.i98 = phi i32 [ %68, %.lr.ph5.i100 ], [ 0, %.lr.ph5.i100.preheader ]
  %.013.i99 = phi i32 [ %70, %.lr.ph5.i100 ], [ %64, %.lr.ph5.i100.preheader ]
  %66 = and i32 %.013.i99, 15
  %67 = icmp ult i32 %66, 10
  %.0.in.v.i108 = select i1 %67, i32 48, i32 87
  %.0.in.i109 = add nuw nsw i32 %.0.in.v.i108, %66
  %.0.i110 = trunc i32 %.0.in.i109 to i8
  %68 = add nsw i32 %c.04.i98, 1
  %69 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i98
  store i8 %.0.i110, i8* %69, align 1, !tbaa !5
  %70 = lshr i32 %.013.i99, 4
  %71 = icmp eq i32 %70, 0
  br i1 %71, label %._crit_edge.i101, label %.lr.ph5.i100

._crit_edge.i101:                                 ; preds = %.lr.ph5.i100
  %.lcssa168 = phi i32 [ %68, %.lr.ph5.i100 ]
  %c.04.i98.lcssa = phi i32 [ %c.04.i98, %.lr.ph5.i100 ]
  %72 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa168
  store i8 0, i8* %72, align 1, !tbaa !5
  %73 = icmp sgt i32 %c.04.i98.lcssa, -1
  br i1 %73, label %.lr.ph.i105.preheader, label %i2h.exit107

.lr.ph.i105.preheader:                            ; preds = %._crit_edge.i101
  br label %.lr.ph.i105

.lr.ph.i105:                                      ; preds = %.lr.ph.i105, %.lr.ph.i105.preheader
  %.in.i102 = phi i32 [ %74, %.lr.ph.i105 ], [ %.lcssa168, %.lr.ph.i105.preheader ]
  %.12.i103 = phi i32 [ %77, %.lr.ph.i105 ], [ 0, %.lr.ph.i105.preheader ]
  %74 = add nsw i32 %.in.i102, -1
  %75 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %74
  %76 = load i8* %75, align 1, !tbaa !5
  %77 = add i32 %.12.i103, 1
  %78 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i103
  store i8 %76, i8* %78, align 1, !tbaa !5
  %exitcond.i104 = icmp eq i32 %77, %.lcssa168
  br i1 %exitcond.i104, label %i2h.exit107.loopexit, label %.lr.ph.i105

i2h.exit107.loopexit:                             ; preds = %.lr.ph.i105
  br label %i2h.exit107

i2h.exit107:                                      ; preds = %i2h.exit107.loopexit, %._crit_edge.i101, %60
  %.0.i106 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %60 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i101 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit107.loopexit ]
  %79 = load i8* %.0.i106, align 1, !tbaa !5
  %80 = icmp eq i8 %79, 0
  br i1 %80, label %.backedge, label %.lr.ph.i94.preheader

.lr.ph.i94.preheader:                             ; preds = %i2h.exit107
  br label %.lr.ph.i94

.lr.ph.i94:                                       ; preds = %.lr.ph.i94, %.lr.ph.i94.preheader
  %81 = phi i8 [ %84, %.lr.ph.i94 ], [ %79, %.lr.ph.i94.preheader ]
  %.01.i93 = phi i8* [ %82, %.lr.ph.i94 ], [ %.0.i106, %.lr.ph.i94.preheader ]
  %82 = getelementptr inbounds i8* %.01.i93, i32 1
  %83 = sext i8 %81 to i32
  store volatile i32 %83, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %84 = load i8* %82, align 1, !tbaa !5
  %85 = icmp eq i8 %84, 0
  br i1 %85, label %.backedge.loopexit155, label %.lr.ph.i94

; <label>:86                                      ; preds = %10
  %87 = load i8** %arg, align 4
  %88 = bitcast i8* %87 to i32*
  %89 = getelementptr i8* %87, i32 4
  store i8* %89, i8** %arg, align 4
  %90 = load i32* %88, align 4
  %91 = icmp eq i32 %90, 0
  br i1 %91, label %i2h.exit89, label %.lr.ph5.i82.preheader

.lr.ph5.i82.preheader:                            ; preds = %86
  br label %.lr.ph5.i82

.lr.ph5.i82:                                      ; preds = %.lr.ph5.i82, %.lr.ph5.i82.preheader
  %c.04.i80 = phi i32 [ %94, %.lr.ph5.i82 ], [ 0, %.lr.ph5.i82.preheader ]
  %.013.i81 = phi i32 [ %96, %.lr.ph5.i82 ], [ %90, %.lr.ph5.i82.preheader ]
  %92 = and i32 %.013.i81, 15
  %93 = icmp ult i32 %92, 10
  %.0.in.v.i90 = select i1 %93, i32 48, i32 55
  %.0.in.i91 = add nuw nsw i32 %.0.in.v.i90, %92
  %.0.i92 = trunc i32 %.0.in.i91 to i8
  %94 = add nsw i32 %c.04.i80, 1
  %95 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i80
  store i8 %.0.i92, i8* %95, align 1, !tbaa !5
  %96 = lshr i32 %.013.i81, 4
  %97 = icmp eq i32 %96, 0
  br i1 %97, label %._crit_edge.i83, label %.lr.ph5.i82

._crit_edge.i83:                                  ; preds = %.lr.ph5.i82
  %.lcssa167 = phi i32 [ %94, %.lr.ph5.i82 ]
  %c.04.i80.lcssa = phi i32 [ %c.04.i80, %.lr.ph5.i82 ]
  %98 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa167
  store i8 0, i8* %98, align 1, !tbaa !5
  %99 = icmp sgt i32 %c.04.i80.lcssa, -1
  br i1 %99, label %.lr.ph.i87.preheader, label %i2h.exit89

.lr.ph.i87.preheader:                             ; preds = %._crit_edge.i83
  br label %.lr.ph.i87

.lr.ph.i87:                                       ; preds = %.lr.ph.i87, %.lr.ph.i87.preheader
  %.in.i84 = phi i32 [ %100, %.lr.ph.i87 ], [ %.lcssa167, %.lr.ph.i87.preheader ]
  %.12.i85 = phi i32 [ %103, %.lr.ph.i87 ], [ 0, %.lr.ph.i87.preheader ]
  %100 = add nsw i32 %.in.i84, -1
  %101 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %100
  %102 = load i8* %101, align 1, !tbaa !5
  %103 = add i32 %.12.i85, 1
  %104 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i85
  store i8 %102, i8* %104, align 1, !tbaa !5
  %exitcond.i86 = icmp eq i32 %103, %.lcssa167
  br i1 %exitcond.i86, label %i2h.exit89.loopexit, label %.lr.ph.i87

i2h.exit89.loopexit:                              ; preds = %.lr.ph.i87
  br label %i2h.exit89

i2h.exit89:                                       ; preds = %i2h.exit89.loopexit, %._crit_edge.i83, %86
  %.0.i88 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %86 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i83 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit89.loopexit ]
  %105 = load i8* %.0.i88, align 1, !tbaa !5
  %106 = icmp eq i8 %105, 0
  br i1 %106, label %.backedge, label %.lr.ph.i76.preheader

.lr.ph.i76.preheader:                             ; preds = %i2h.exit89
  br label %.lr.ph.i76

.lr.ph.i76:                                       ; preds = %.lr.ph.i76, %.lr.ph.i76.preheader
  %107 = phi i8 [ %110, %.lr.ph.i76 ], [ %105, %.lr.ph.i76.preheader ]
  %.01.i75 = phi i8* [ %108, %.lr.ph.i76 ], [ %.0.i88, %.lr.ph.i76.preheader ]
  %108 = getelementptr inbounds i8* %.01.i75, i32 1
  %109 = sext i8 %107 to i32
  store volatile i32 %109, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %110 = load i8* %108, align 1, !tbaa !5
  %111 = icmp eq i8 %110, 0
  br i1 %111, label %.backedge.loopexit156, label %.lr.ph.i76

; <label>:112                                     ; preds = %10
  %113 = add nsw i32 %.k.1, 1
  %114 = getelementptr inbounds i8* %fmt, i32 %113
  %115 = load i8* %114, align 1, !tbaa !5
  %116 = sext i8 %115 to i32
  switch i32 %116, label %.backedge [
    i32 100, label %117
    i32 120, label %162
    i32 88, label %197
  ]

; <label>:117                                     ; preds = %112
  %118 = load i8** %arg, align 4
  %119 = bitcast i8* %118 to i64*
  %120 = getelementptr i8* %118, i32 8
  store i8* %120, i8** %arg, align 4
  %121 = load i64* %119, align 4
  %122 = icmp slt i64 %121, 0
  br i1 %122, label %123, label %125

; <label>:123                                     ; preds = %117
  %124 = sub i64 0, %121
  br label %127

; <label>:125                                     ; preds = %117
  %126 = icmp eq i64 %121, 0
  br i1 %126, label %ltoa.exit, label %127

; <label>:127                                     ; preds = %125, %123
  %.0.i70 = phi i64 [ %124, %123 ], [ %121, %125 ]
  %neg.0.i = phi i32 [ 1, %123 ], [ 0, %125 ]
  store i8 0, i8* getelementptr inbounds ([25 x i8]* @ltoa.buf, i32 0, i32 24), align 1, !tbaa !5
  br label %128

; <label>:128                                     ; preds = %128, %127
  %i.06.i = phi i32 [ 23, %127 ], [ %134, %128 ]
  %.15.i = phi i64 [ %.0.i70, %127 ], [ %133, %128 ]
  %129 = srem i64 %.15.i, 10
  %130 = add nsw i64 %129, 48
  %131 = trunc i64 %130 to i8
  %132 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %i.06.i
  store i8 %131, i8* %132, align 1, !tbaa !5
  %133 = sdiv i64 %.15.i, 10
  %134 = add nsw i32 %i.06.i, -1
  %135 = icmp sgt i32 %i.06.i, 0
  br i1 %135, label %128, label %.preheader2.i.preheader

.preheader2.i.preheader:                          ; preds = %128
  br label %.preheader2.i

; <label>:136                                     ; preds = %.preheader2.i
  %137 = icmp slt i32 %141, 24
  br i1 %137, label %.preheader2.i, label %142

.preheader2.i:                                    ; preds = %136, %.preheader2.i.preheader
  %i.14.i = phi i32 [ %141, %136 ], [ 0, %.preheader2.i.preheader ]
  %138 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %i.14.i
  %139 = load i8* %138, align 1, !tbaa !5
  %140 = icmp eq i8 %139, 48
  %141 = add nsw i32 %i.14.i, 1
  br i1 %140, label %136, label %142

; <label>:142                                     ; preds = %.preheader2.i, %136
  %i.1.lcssa.i = phi i32 [ %i.14.i, %.preheader2.i ], [ %141, %136 ]
  %143 = icmp eq i32 %neg.0.i, 0
  br i1 %143, label %.preheader.i, label %144

; <label>:144                                     ; preds = %142
  store i8 45, i8* getelementptr inbounds ([25 x i8]* @ltoa.out, i32 0, i32 0), align 1, !tbaa !5
  br label %.preheader.i

.preheader.i:                                     ; preds = %144, %142
  %145 = sub i32 24, %i.1.lcssa.i
  %146 = icmp sgt i32 %145, 0
  br i1 %146, label %.lr.ph.i72.preheader, label %._crit_edge.i73

.lr.ph.i72.preheader:                             ; preds = %.preheader.i
  br label %.lr.ph.i72

.lr.ph.i72:                                       ; preds = %.lr.ph.i72, %.lr.ph.i72.preheader
  %j.03.i = phi i32 [ %152, %.lr.ph.i72 ], [ 0, %.lr.ph.i72.preheader ]
  %147 = add nsw i32 %j.03.i, %i.1.lcssa.i
  %148 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %147
  %149 = load i8* %148, align 1, !tbaa !5
  %150 = add nsw i32 %j.03.i, %neg.0.i
  %151 = getelementptr inbounds [25 x i8]* @ltoa.out, i32 0, i32 %150
  store i8 %149, i8* %151, align 1, !tbaa !5
  %152 = add nsw i32 %j.03.i, 1
  %exitcond.i71 = icmp eq i32 %152, %145
  br i1 %exitcond.i71, label %._crit_edge.i73.loopexit, label %.lr.ph.i72

._crit_edge.i73.loopexit:                         ; preds = %.lr.ph.i72
  br label %._crit_edge.i73

._crit_edge.i73:                                  ; preds = %._crit_edge.i73.loopexit, %.preheader.i
  %j.0.lcssa.i = phi i32 [ 0, %.preheader.i ], [ %145, %._crit_edge.i73.loopexit ]
  %153 = add nsw i32 %j.0.lcssa.i, %neg.0.i
  %154 = getelementptr inbounds [25 x i8]* @ltoa.out, i32 0, i32 %153
  store i8 0, i8* %154, align 1, !tbaa !5
  br label %ltoa.exit

ltoa.exit:                                        ; preds = %._crit_edge.i73, %125
  %.01.i74 = phi i8* [ getelementptr inbounds ([25 x i8]* @ltoa.out, i32 0, i32 0), %._crit_edge.i73 ], [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %125 ]
  %155 = load i8* %.01.i74, align 1, !tbaa !5
  %156 = icmp eq i8 %155, 0
  br i1 %156, label %.backedge, label %.lr.ph.i67.preheader

.lr.ph.i67.preheader:                             ; preds = %ltoa.exit
  br label %.lr.ph.i67

.lr.ph.i67:                                       ; preds = %.lr.ph.i67, %.lr.ph.i67.preheader
  %157 = phi i8 [ %160, %.lr.ph.i67 ], [ %155, %.lr.ph.i67.preheader ]
  %.01.i66 = phi i8* [ %158, %.lr.ph.i67 ], [ %.01.i74, %.lr.ph.i67.preheader ]
  %158 = getelementptr inbounds i8* %.01.i66, i32 1
  %159 = sext i8 %157 to i32
  store volatile i32 %159, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %160 = load i8* %158, align 1, !tbaa !5
  %161 = icmp eq i8 %160, 0
  br i1 %161, label %.backedge.loopexit157, label %.lr.ph.i67

; <label>:162                                     ; preds = %112
  %163 = load i8** %arg, align 4
  %164 = bitcast i8* %163 to i32*
  %165 = getelementptr i8* %163, i32 4
  store i8* %165, i8** %arg, align 4
  %166 = load i32* %164, align 4
  %167 = zext i32 %166 to i64
  %168 = bitcast i8* %165 to i32*
  %169 = getelementptr i8* %163, i32 8
  store i8* %169, i8** %arg, align 4
  %170 = load i32* %168, align 4
  %171 = zext i32 %170 to i64
  %172 = shl nuw i64 %171, 32
  %173 = or i64 %172, %167
  %174 = icmp eq i64 %173, 0
  br i1 %174, label %l2h.exit62, label %.lr.ph5.i56.preheader

.lr.ph5.i56.preheader:                            ; preds = %162
  br label %.lr.ph5.i56

.lr.ph5.i56:                                      ; preds = %.lr.ph5.i56, %.lr.ph5.i56.preheader
  %c.04.i53 = phi i32 [ %177, %.lr.ph5.i56 ], [ 0, %.lr.ph5.i56.preheader ]
  %.013.i54 = phi i64 [ %179, %.lr.ph5.i56 ], [ %173, %.lr.ph5.i56.preheader ]
  %.01.tr.i55 = trunc i64 %.013.i54 to i32
  %175 = and i32 %.01.tr.i55, 15
  %176 = icmp ult i32 %175, 10
  %.0.in.v.i63 = select i1 %176, i32 48, i32 87
  %.0.in.i64 = add nuw nsw i32 %.0.in.v.i63, %175
  %.0.i65 = trunc i32 %.0.in.i64 to i8
  %177 = add nsw i32 %c.04.i53, 1
  %178 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 %c.04.i53
  store i8 %.0.i65, i8* %178, align 1, !tbaa !5
  %179 = lshr i64 %.013.i54, 4
  %180 = icmp eq i64 %179, 0
  br i1 %180, label %._crit_edge.i57, label %.lr.ph5.i56

._crit_edge.i57:                                  ; preds = %.lr.ph5.i56
  %.lcssa166 = phi i32 [ %177, %.lr.ph5.i56 ]
  %c.04.i53.lcssa = phi i32 [ %c.04.i53, %.lr.ph5.i56 ]
  %181 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa166
  store i8 0, i8* %181, align 1, !tbaa !5
  %182 = icmp sgt i32 %c.04.i53.lcssa, -1
  br i1 %182, label %.lr.ph.i60.preheader, label %l2h.exit62

.lr.ph.i60.preheader:                             ; preds = %._crit_edge.i57
  br label %.lr.ph.i60

.lr.ph.i60:                                       ; preds = %.lr.ph.i60..lr.ph.i60_crit_edge, %.lr.ph.i60.preheader
  %.in.i58 = phi i32 [ %183, %.lr.ph.i60..lr.ph.i60_crit_edge ], [ %.lcssa166, %.lr.ph.i60.preheader ]
  %.12.i59 = phi i64 [ %189, %.lr.ph.i60..lr.ph.i60_crit_edge ], [ 0, %.lr.ph.i60.preheader ]
  %183 = add nsw i32 %.in.i58, -1
  %184 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 %183
  %185 = load i8* %184, align 1, !tbaa !5
  %186 = trunc i64 %.12.i59 to i32
  %187 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %186
  store i8 %185, i8* %187, align 1, !tbaa !5
  %188 = icmp sgt i32 %183, 0
  br i1 %188, label %.lr.ph.i60..lr.ph.i60_crit_edge, label %l2h.exit62.loopexit

.lr.ph.i60..lr.ph.i60_crit_edge:                  ; preds = %.lr.ph.i60
  %189 = add i64 %.12.i59, 1
  br label %.lr.ph.i60

l2h.exit62.loopexit:                              ; preds = %.lr.ph.i60
  br label %l2h.exit62

l2h.exit62:                                       ; preds = %l2h.exit62.loopexit, %._crit_edge.i57, %162
  %.0.i61 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %162 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge.i57 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %l2h.exit62.loopexit ]
  %190 = load i8* %.0.i61, align 1, !tbaa !5
  %191 = icmp eq i8 %190, 0
  br i1 %191, label %.backedge, label %.lr.ph.i49.preheader

.lr.ph.i49.preheader:                             ; preds = %l2h.exit62
  br label %.lr.ph.i49

.lr.ph.i49:                                       ; preds = %.lr.ph.i49, %.lr.ph.i49.preheader
  %192 = phi i8 [ %195, %.lr.ph.i49 ], [ %190, %.lr.ph.i49.preheader ]
  %.01.i48 = phi i8* [ %193, %.lr.ph.i49 ], [ %.0.i61, %.lr.ph.i49.preheader ]
  %193 = getelementptr inbounds i8* %.01.i48, i32 1
  %194 = sext i8 %192 to i32
  store volatile i32 %194, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %195 = load i8* %193, align 1, !tbaa !5
  %196 = icmp eq i8 %195, 0
  br i1 %196, label %.backedge.loopexit158, label %.lr.ph.i49

; <label>:197                                     ; preds = %112
  %198 = load i8** %arg, align 4
  %199 = bitcast i8* %198 to i32*
  %200 = getelementptr i8* %198, i32 4
  store i8* %200, i8** %arg, align 4
  %201 = load i32* %199, align 4
  %202 = zext i32 %201 to i64
  %203 = bitcast i8* %200 to i32*
  %204 = getelementptr i8* %198, i32 8
  store i8* %204, i8** %arg, align 4
  %205 = load i32* %203, align 4
  %206 = zext i32 %205 to i64
  %207 = shl nuw i64 %206, 32
  %208 = or i64 %207, %202
  %209 = icmp eq i64 %208, 0
  br i1 %209, label %l2h.exit, label %.lr.ph5.i39.preheader

.lr.ph5.i39.preheader:                            ; preds = %197
  br label %.lr.ph5.i39

.lr.ph5.i39:                                      ; preds = %.lr.ph5.i39, %.lr.ph5.i39.preheader
  %c.04.i37 = phi i32 [ %212, %.lr.ph5.i39 ], [ 0, %.lr.ph5.i39.preheader ]
  %.013.i38 = phi i64 [ %214, %.lr.ph5.i39 ], [ %208, %.lr.ph5.i39.preheader ]
  %.01.tr.i = trunc i64 %.013.i38 to i32
  %210 = and i32 %.01.tr.i, 15
  %211 = icmp ult i32 %210, 10
  %.0.in.v.i45 = select i1 %211, i32 48, i32 55
  %.0.in.i46 = add nuw nsw i32 %.0.in.v.i45, %210
  %.0.i47 = trunc i32 %.0.in.i46 to i8
  %212 = add nsw i32 %c.04.i37, 1
  %213 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 %c.04.i37
  store i8 %.0.i47, i8* %213, align 1, !tbaa !5
  %214 = lshr i64 %.013.i38, 4
  %215 = icmp eq i64 %214, 0
  br i1 %215, label %._crit_edge.i40, label %.lr.ph5.i39

._crit_edge.i40:                                  ; preds = %.lr.ph5.i39
  %.lcssa165 = phi i32 [ %212, %.lr.ph5.i39 ]
  %c.04.i37.lcssa = phi i32 [ %c.04.i37, %.lr.ph5.i39 ]
  %216 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa165
  store i8 0, i8* %216, align 1, !tbaa !5
  %217 = icmp sgt i32 %c.04.i37.lcssa, -1
  br i1 %217, label %.lr.ph.i43.preheader, label %l2h.exit

.lr.ph.i43.preheader:                             ; preds = %._crit_edge.i40
  br label %.lr.ph.i43

.lr.ph.i43:                                       ; preds = %.lr.ph.i43..lr.ph.i43_crit_edge, %.lr.ph.i43.preheader
  %.in.i41 = phi i32 [ %218, %.lr.ph.i43..lr.ph.i43_crit_edge ], [ %.lcssa165, %.lr.ph.i43.preheader ]
  %.12.i42 = phi i64 [ %224, %.lr.ph.i43..lr.ph.i43_crit_edge ], [ 0, %.lr.ph.i43.preheader ]
  %218 = add nsw i32 %.in.i41, -1
  %219 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 %218
  %220 = load i8* %219, align 1, !tbaa !5
  %221 = trunc i64 %.12.i42 to i32
  %222 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %221
  store i8 %220, i8* %222, align 1, !tbaa !5
  %223 = icmp sgt i32 %218, 0
  br i1 %223, label %.lr.ph.i43..lr.ph.i43_crit_edge, label %l2h.exit.loopexit

.lr.ph.i43..lr.ph.i43_crit_edge:                  ; preds = %.lr.ph.i43
  %224 = add i64 %.12.i42, 1
  br label %.lr.ph.i43

l2h.exit.loopexit:                                ; preds = %.lr.ph.i43
  br label %l2h.exit

l2h.exit:                                         ; preds = %l2h.exit.loopexit, %._crit_edge.i40, %197
  %.0.i44 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %197 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge.i40 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %l2h.exit.loopexit ]
  %225 = load i8* %.0.i44, align 1, !tbaa !5
  %226 = icmp eq i8 %225, 0
  br i1 %226, label %.backedge, label %.lr.ph.i33.preheader

.lr.ph.i33.preheader:                             ; preds = %l2h.exit
  br label %.lr.ph.i33

.lr.ph.i33:                                       ; preds = %.lr.ph.i33, %.lr.ph.i33.preheader
  %227 = phi i8 [ %230, %.lr.ph.i33 ], [ %225, %.lr.ph.i33.preheader ]
  %.01.i32 = phi i8* [ %228, %.lr.ph.i33 ], [ %.0.i44, %.lr.ph.i33.preheader ]
  %228 = getelementptr inbounds i8* %.01.i32, i32 1
  %229 = sext i8 %227 to i32
  store volatile i32 %229, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %230 = load i8* %228, align 1, !tbaa !5
  %231 = icmp eq i8 %230, 0
  br i1 %231, label %.backedge.loopexit159, label %.lr.ph.i33

; <label>:232                                     ; preds = %10
  %233 = load i8** %arg, align 4
  %234 = bitcast i8* %233 to i32*
  %235 = getelementptr i8* %233, i32 4
  store i8* %235, i8** %arg, align 4
  %236 = load i32* %234, align 4
  %237 = add nsw i32 %.k.1, 1
  %238 = getelementptr inbounds i8* %fmt, i32 %237
  %239 = load i8* %238, align 1, !tbaa !5
  %240 = icmp eq i8 %239, 104
  %x.0.v = select i1 %240, i32 255, i32 65535
  %x.0 = and i32 %x.0.v, %236
  %k.3 = select i1 %240, i32 %237, i32 %.k.1
  %241 = add nsw i32 %k.3, 1
  %242 = getelementptr inbounds i8* %fmt, i32 %241
  %243 = load i8* %242, align 1, !tbaa !5
  %244 = sext i8 %243 to i32
  switch i32 %244, label %.backedge [
    i32 100, label %245
    i32 120, label %254
    i32 88, label %276
  ]

; <label>:245                                     ; preds = %232
  %246 = call i8* @itoa(i32 %x.0) #5
  %247 = load i8* %246, align 1, !tbaa !5
  %248 = icmp eq i8 %247, 0
  br i1 %248, label %.backedge, label %.lr.ph.i25.preheader

.lr.ph.i25.preheader:                             ; preds = %245
  br label %.lr.ph.i25

.lr.ph.i25:                                       ; preds = %.lr.ph.i25, %.lr.ph.i25.preheader
  %249 = phi i8 [ %252, %.lr.ph.i25 ], [ %247, %.lr.ph.i25.preheader ]
  %.01.i24 = phi i8* [ %250, %.lr.ph.i25 ], [ %246, %.lr.ph.i25.preheader ]
  %250 = getelementptr inbounds i8* %.01.i24, i32 1
  %251 = sext i8 %249 to i32
  store volatile i32 %251, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %252 = load i8* %250, align 1, !tbaa !5
  %253 = icmp eq i8 %252, 0
  br i1 %253, label %.backedge.loopexit160, label %.lr.ph.i25

; <label>:254                                     ; preds = %232
  %255 = icmp eq i32 %x.0, 0
  br i1 %255, label %i2h.exit20, label %.lr.ph5.i13.preheader

.lr.ph5.i13.preheader:                            ; preds = %254
  br label %.lr.ph5.i13

.lr.ph5.i13:                                      ; preds = %.lr.ph5.i13, %.lr.ph5.i13.preheader
  %c.04.i11 = phi i32 [ %258, %.lr.ph5.i13 ], [ 0, %.lr.ph5.i13.preheader ]
  %.013.i12 = phi i32 [ %260, %.lr.ph5.i13 ], [ %x.0, %.lr.ph5.i13.preheader ]
  %256 = and i32 %.013.i12, 15
  %257 = icmp ult i32 %256, 10
  %.0.in.v.i21 = select i1 %257, i32 48, i32 87
  %.0.in.i22 = add nuw nsw i32 %.0.in.v.i21, %256
  %.0.i23 = trunc i32 %.0.in.i22 to i8
  %258 = add nsw i32 %c.04.i11, 1
  %259 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i11
  store i8 %.0.i23, i8* %259, align 1, !tbaa !5
  %260 = lshr i32 %.013.i12, 4
  %261 = icmp eq i32 %260, 0
  br i1 %261, label %._crit_edge.i14, label %.lr.ph5.i13

._crit_edge.i14:                                  ; preds = %.lr.ph5.i13
  %.lcssa164 = phi i32 [ %258, %.lr.ph5.i13 ]
  %c.04.i11.lcssa = phi i32 [ %c.04.i11, %.lr.ph5.i13 ]
  %262 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa164
  store i8 0, i8* %262, align 1, !tbaa !5
  %263 = icmp sgt i32 %c.04.i11.lcssa, -1
  br i1 %263, label %.lr.ph.i18.preheader, label %i2h.exit20

.lr.ph.i18.preheader:                             ; preds = %._crit_edge.i14
  br label %.lr.ph.i18

.lr.ph.i18:                                       ; preds = %.lr.ph.i18, %.lr.ph.i18.preheader
  %.in.i15 = phi i32 [ %264, %.lr.ph.i18 ], [ %.lcssa164, %.lr.ph.i18.preheader ]
  %.12.i16 = phi i32 [ %267, %.lr.ph.i18 ], [ 0, %.lr.ph.i18.preheader ]
  %264 = add nsw i32 %.in.i15, -1
  %265 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %264
  %266 = load i8* %265, align 1, !tbaa !5
  %267 = add i32 %.12.i16, 1
  %268 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i16
  store i8 %266, i8* %268, align 1, !tbaa !5
  %exitcond.i17 = icmp eq i32 %267, %.lcssa164
  br i1 %exitcond.i17, label %i2h.exit20.loopexit, label %.lr.ph.i18

i2h.exit20.loopexit:                              ; preds = %.lr.ph.i18
  br label %i2h.exit20

i2h.exit20:                                       ; preds = %i2h.exit20.loopexit, %._crit_edge.i14, %254
  %.0.i19 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %254 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i14 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit20.loopexit ]
  %269 = load i8* %.0.i19, align 1, !tbaa !5
  %270 = icmp eq i8 %269, 0
  br i1 %270, label %.backedge, label %.lr.ph.i7.preheader

.lr.ph.i7.preheader:                              ; preds = %i2h.exit20
  br label %.lr.ph.i7

.lr.ph.i7:                                        ; preds = %.lr.ph.i7, %.lr.ph.i7.preheader
  %271 = phi i8 [ %274, %.lr.ph.i7 ], [ %269, %.lr.ph.i7.preheader ]
  %.01.i6 = phi i8* [ %272, %.lr.ph.i7 ], [ %.0.i19, %.lr.ph.i7.preheader ]
  %272 = getelementptr inbounds i8* %.01.i6, i32 1
  %273 = sext i8 %271 to i32
  store volatile i32 %273, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %274 = load i8* %272, align 1, !tbaa !5
  %275 = icmp eq i8 %274, 0
  br i1 %275, label %.backedge.loopexit161, label %.lr.ph.i7

; <label>:276                                     ; preds = %232
  %277 = icmp eq i32 %x.0, 0
  br i1 %277, label %i2h.exit, label %.lr.ph5.i.preheader

.lr.ph5.i.preheader:                              ; preds = %276
  br label %.lr.ph5.i

.lr.ph5.i:                                        ; preds = %.lr.ph5.i, %.lr.ph5.i.preheader
  %c.04.i = phi i32 [ %280, %.lr.ph5.i ], [ 0, %.lr.ph5.i.preheader ]
  %.013.i = phi i32 [ %282, %.lr.ph5.i ], [ %x.0, %.lr.ph5.i.preheader ]
  %278 = and i32 %.013.i, 15
  %279 = icmp ult i32 %278, 10
  %.0.in.v.i = select i1 %279, i32 48, i32 55
  %.0.in.i = add nuw nsw i32 %.0.in.v.i, %278
  %.0.i5 = trunc i32 %.0.in.i to i8
  %280 = add nsw i32 %c.04.i, 1
  %281 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i
  store i8 %.0.i5, i8* %281, align 1, !tbaa !5
  %282 = lshr i32 %.013.i, 4
  %283 = icmp eq i32 %282, 0
  br i1 %283, label %._crit_edge.i, label %.lr.ph5.i

._crit_edge.i:                                    ; preds = %.lr.ph5.i
  %.lcssa163 = phi i32 [ %280, %.lr.ph5.i ]
  %c.04.i.lcssa = phi i32 [ %c.04.i, %.lr.ph5.i ]
  %284 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa163
  store i8 0, i8* %284, align 1, !tbaa !5
  %285 = icmp sgt i32 %c.04.i.lcssa, -1
  br i1 %285, label %.lr.ph.i4.preheader, label %i2h.exit

.lr.ph.i4.preheader:                              ; preds = %._crit_edge.i
  br label %.lr.ph.i4

.lr.ph.i4:                                        ; preds = %.lr.ph.i4, %.lr.ph.i4.preheader
  %.in.i = phi i32 [ %286, %.lr.ph.i4 ], [ %.lcssa163, %.lr.ph.i4.preheader ]
  %.12.i = phi i32 [ %289, %.lr.ph.i4 ], [ 0, %.lr.ph.i4.preheader ]
  %286 = add nsw i32 %.in.i, -1
  %287 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %286
  %288 = load i8* %287, align 1, !tbaa !5
  %289 = add i32 %.12.i, 1
  %290 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i
  store i8 %288, i8* %290, align 1, !tbaa !5
  %exitcond.i = icmp eq i32 %289, %.lcssa163
  br i1 %exitcond.i, label %i2h.exit.loopexit, label %.lr.ph.i4

i2h.exit.loopexit:                                ; preds = %.lr.ph.i4
  br label %i2h.exit

i2h.exit:                                         ; preds = %i2h.exit.loopexit, %._crit_edge.i, %276
  %.0.i = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %276 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit.loopexit ]
  %291 = load i8* %.0.i, align 1, !tbaa !5
  %292 = icmp eq i8 %291, 0
  br i1 %292, label %.backedge, label %.lr.ph.i2.preheader

.lr.ph.i2.preheader:                              ; preds = %i2h.exit
  br label %.lr.ph.i2

.lr.ph.i2:                                        ; preds = %.lr.ph.i2, %.lr.ph.i2.preheader
  %293 = phi i8 [ %296, %.lr.ph.i2 ], [ %291, %.lr.ph.i2.preheader ]
  %.01.i1 = phi i8* [ %294, %.lr.ph.i2 ], [ %.0.i, %.lr.ph.i2.preheader ]
  %294 = getelementptr inbounds i8* %.01.i1, i32 1
  %295 = sext i8 %293 to i32
  store volatile i32 %295, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %296 = load i8* %294, align 1, !tbaa !5
  %297 = icmp eq i8 %296, 0
  br i1 %297, label %.backedge.loopexit162, label %.lr.ph.i2

; <label>:298                                     ; preds = %10
  store volatile i32 37, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  br label %.backedge

; <label>:299                                     ; preds = %10
  store volatile i32 37, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  %300 = load i8* %13, align 1, !tbaa !5
  %301 = sext i8 %300 to i32
  store volatile i32 %301, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  br label %.backedge

; <label>:302                                     ; preds = %4
  %303 = sext i8 %6 to i32
  store volatile i32 %303, i32* inttoptr (i32 268472320 to i32*), align 4096, !tbaa !1
  br label %.backedge

.backedge.loopexit:                               ; preds = %.lr.ph.i
  br label %.backedge

.backedge.loopexit153:                            ; preds = %.lr.ph.i29
  br label %.backedge

.backedge.loopexit154:                            ; preds = %.lr.ph.i112
  br label %.backedge

.backedge.loopexit155:                            ; preds = %.lr.ph.i94
  br label %.backedge

.backedge.loopexit156:                            ; preds = %.lr.ph.i76
  br label %.backedge

.backedge.loopexit157:                            ; preds = %.lr.ph.i67
  br label %.backedge

.backedge.loopexit158:                            ; preds = %.lr.ph.i49
  br label %.backedge

.backedge.loopexit159:                            ; preds = %.lr.ph.i33
  br label %.backedge

.backedge.loopexit160:                            ; preds = %.lr.ph.i25
  br label %.backedge

.backedge.loopexit161:                            ; preds = %.lr.ph.i7
  br label %.backedge

.backedge.loopexit162:                            ; preds = %.lr.ph.i2
  br label %.backedge

.backedge:                                        ; preds = %.backedge.loopexit162, %.backedge.loopexit161, %.backedge.loopexit160, %.backedge.loopexit159, %.backedge.loopexit158, %.backedge.loopexit157, %.backedge.loopexit156, %.backedge.loopexit155, %.backedge.loopexit154, %.backedge.loopexit153, %.backedge.loopexit, %302, %299, %298, %i2h.exit, %i2h.exit20, %245, %232, %l2h.exit, %l2h.exit62, %ltoa.exit, %112, %i2h.exit89, %i2h.exit107, %54, %42, %29, %16
  %k.0.be.in = phi i32 [ %k.0, %302 ], [ %.k.1, %299 ], [ %.k.1, %298 ], [ %241, %232 ], [ %.k.1, %112 ], [ %.k.1, %54 ], [ %.k.1, %16 ], [ %.k.1, %29 ], [ %.k.1, %42 ], [ %.k.1, %i2h.exit107 ], [ %.k.1, %i2h.exit89 ], [ %113, %ltoa.exit ], [ %113, %l2h.exit62 ], [ %113, %l2h.exit ], [ %241, %245 ], [ %241, %i2h.exit20 ], [ %241, %i2h.exit ], [ %.k.1, %.backedge.loopexit ], [ %.k.1, %.backedge.loopexit153 ], [ %.k.1, %.backedge.loopexit154 ], [ %.k.1, %.backedge.loopexit155 ], [ %.k.1, %.backedge.loopexit156 ], [ %113, %.backedge.loopexit157 ], [ %113, %.backedge.loopexit158 ], [ %113, %.backedge.loopexit159 ], [ %241, %.backedge.loopexit160 ], [ %241, %.backedge.loopexit161 ], [ %241, %.backedge.loopexit162 ]
  %k.0.be = add nsw i32 %k.0.be.in, 1
  br label %4

; <label>:304                                     ; preds = %4
  call void @llvm.va_end(i8* %1)
  ret i32 0
}

; Function Attrs: nounwind
declare void @llvm.va_start(i8*) #2

; Function Attrs: nounwind
declare void @llvm.va_end(i8*) #2

; Function Attrs: noreturn nounwind
define void @exit(i32 %a) #3 {
  %1 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @.str1, i32 0, i32 0), i32 %a) #5
  br label %2

; <label>:2                                       ; preds = %2, %0
  br label %2
}

; Function Attrs: noreturn nounwind
define void @abort(i32 %a) #3 {
  tail call void @exit(i32 %a) #5
  unreachable
}

; Function Attrs: nounwind
declare void @llvm.lifetime.start(i64, i8* nocapture) #2

; Function Attrs: nounwind
declare void @llvm.lifetime.end(i64, i8* nocapture) #2

attributes #0 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind readnone "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { nounwind }
attributes #3 = { noreturn nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { nobuiltin nounwind }
attributes #5 = { nobuiltin }

!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{metadata !2, metadata !2, i64 0}
!2 = metadata !{metadata !"int", metadata !3, i64 0}
!3 = metadata !{metadata !"omnipotent char", metadata !4, i64 0}
!4 = metadata !{metadata !"Simple C/C++ TBAA"}
!5 = metadata !{metadata !3, metadata !3, i64 0}
