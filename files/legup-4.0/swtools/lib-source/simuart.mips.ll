; ModuleID = 'simuart.mips.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

@i2h.hex = internal global [9 x i8] zeroinitializer, align 1
@.str = private unnamed_addr constant [2 x i8] c"0\00", align 1
@l2h.hex = internal global [17 x i8] zeroinitializer, align 1
@itoa.buf = internal unnamed_addr global [11 x i8] zeroinitializer, align 1
@itoa.out = internal global [11 x i8] zeroinitializer, align 1
@utoa.buf = internal unnamed_addr global [11 x i8] zeroinitializer, align 1
@utoa.out = internal global [11 x i8] zeroinitializer, align 1
@.str1 = private unnamed_addr constant [33 x i8] c"program returned %d exit status\0A\00", align 1

define void @printc_uart(i8 signext %c) {
  %1 = sext i8 %c to i32
  volatile store i32 %1, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  ret void
}

define void @print_uart(i8* %ptr) {
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
  volatile store i32 %5, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %6 = load i8* %4, align 1, !tbaa !5
  %7 = icmp eq i8 %6, 0
  br i1 %7, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %0
  ret void
}

define signext i8 @_i2h(i32 %i) {
  %1 = icmp slt i32 %i, 10
  %.0.in.v = select i1 %1, i32 48, i32 87
  %.0.in = add i32 %.0.in.v, %i
  %.0 = trunc i32 %.0.in to i8
  ret i8 %.0
}

define signext i8 @_i2H(i32 %i) {
  %1 = icmp slt i32 %i, 10
  %.0.in.v = select i1 %1, i32 48, i32 55
  %.0.in = add i32 %.0.in.v, %i
  %.0 = trunc i32 %.0.in to i8
  ret i8 %.0
}

define i8* @i2h(i32 %i, i32 %caps) {
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
  %4 = tail call signext i8 %_i2h._i2H(i32 %3)
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

define i8* @l2h(i64 %i, i32 %caps) {
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
  %4 = tail call signext i8 %_i2h._i2H(i32 %3)
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

define i8* @itoa(i32 %num) {
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

define i8* @utoa(i32 %num) {
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

define i32 @puts(i8* %fmt) {
  %1 = load i8* %fmt, align 1, !tbaa !5
  %2 = icmp eq i8 %1, 0
  br i1 %2, label %._crit_edge, label %.lr.ph.preheader

.lr.ph.preheader:                                 ; preds = %0
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %3 = phi i8 [ %7, %.lr.ph ], [ %1, %.lr.ph.preheader ]
  %k.01 = phi i32 [ %5, %.lr.ph ], [ 0, %.lr.ph.preheader ]
  %4 = sext i8 %3 to i32
  volatile store i32 %4, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %5 = add nsw i32 %k.01, 1
  %6 = getelementptr inbounds i8* %fmt, i32 %5
  %7 = load i8* %6, align 1, !tbaa !5
  %8 = icmp eq i8 %7, 0
  br i1 %8, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %0
  volatile store i32 10, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  ret i32 0
}

define i32 @printf(i8* %fmt, ...) {
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
  switch i8 %6, label %271 [
    i8 0, label %273
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
  switch i32 %15, label %268 [
    i32 100, label %16
    i32 117, label %29
    i32 115, label %42
    i32 99, label %54
    i32 120, label %60
    i32 88, label %86
    i32 108, label %112
    i32 104, label %201
    i32 37, label %267
  ]

; <label>:16                                      ; preds = %10
  %17 = load i8** %arg, align 4
  %18 = bitcast i8* %17 to i32*
  %19 = getelementptr i8* %17, i32 4
  store i8* %19, i8** %arg, align 4
  %20 = load i32* %18, align 4
  %21 = call i8* @itoa(i32 %20)
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
  volatile store i32 %26, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %27 = load i8* %25, align 1, !tbaa !5
  %28 = icmp eq i8 %27, 0
  br i1 %28, label %.backedge.loopexit, label %.lr.ph.i

; <label>:29                                      ; preds = %10
  %30 = load i8** %arg, align 4
  %31 = bitcast i8* %30 to i32*
  %32 = getelementptr i8* %30, i32 4
  store i8* %32, i8** %arg, align 4
  %33 = load i32* %31, align 4
  %34 = call i8* @utoa(i32 %33)
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
  volatile store i32 %39, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %40 = load i8* %38, align 1, !tbaa !5
  %41 = icmp eq i8 %40, 0
  br i1 %41, label %.backedge.loopexit148, label %.lr.ph.i29

; <label>:42                                      ; preds = %10
  %43 = load i8** %arg, align 4
  %44 = bitcast i8* %43 to i8**
  %45 = getelementptr i8* %43, i32 4
  store i8* %45, i8** %arg, align 4
  %46 = load i8** %44, align 4
  %47 = load i8* %46, align 1, !tbaa !5
  %48 = icmp eq i8 %47, 0
  br i1 %48, label %.backedge, label %.lr.ph.i71.preheader

.lr.ph.i71.preheader:                             ; preds = %42
  br label %.lr.ph.i71

.lr.ph.i71:                                       ; preds = %.lr.ph.i71, %.lr.ph.i71.preheader
  %49 = phi i8 [ %52, %.lr.ph.i71 ], [ %47, %.lr.ph.i71.preheader ]
  %.01.i70 = phi i8* [ %50, %.lr.ph.i71 ], [ %46, %.lr.ph.i71.preheader ]
  %50 = getelementptr inbounds i8* %.01.i70, i32 1
  %51 = sext i8 %49 to i32
  volatile store i32 %51, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %52 = load i8* %50, align 1, !tbaa !5
  %53 = icmp eq i8 %52, 0
  br i1 %53, label %.backedge.loopexit149, label %.lr.ph.i71

; <label>:54                                      ; preds = %10
  %55 = load i8** %arg, align 4
  %56 = bitcast i8* %55 to i32*
  %57 = getelementptr i8* %55, i32 4
  store i8* %57, i8** %arg, align 4
  %58 = load i32* %56, align 4
  %sext = shl i32 %58, 24
  %59 = ashr exact i32 %sext, 24
  volatile store i32 %59, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  br label %.backedge

; <label>:60                                      ; preds = %10
  %61 = load i8** %arg, align 4
  %62 = bitcast i8* %61 to i32*
  %63 = getelementptr i8* %61, i32 4
  store i8* %63, i8** %arg, align 4
  %64 = load i32* %62, align 4
  %65 = icmp eq i32 %64, 0
  br i1 %65, label %i2h.exit106, label %.lr.ph5.i99.preheader

.lr.ph5.i99.preheader:                            ; preds = %60
  br label %.lr.ph5.i99

.lr.ph5.i99:                                      ; preds = %.lr.ph5.i99, %.lr.ph5.i99.preheader
  %c.04.i97 = phi i32 [ %68, %.lr.ph5.i99 ], [ 0, %.lr.ph5.i99.preheader ]
  %.013.i98 = phi i32 [ %70, %.lr.ph5.i99 ], [ %64, %.lr.ph5.i99.preheader ]
  %66 = and i32 %.013.i98, 15
  %67 = icmp ult i32 %66, 10
  %.0.in.v.i107 = select i1 %67, i32 48, i32 87
  %.0.in.i108 = add nuw nsw i32 %.0.in.v.i107, %66
  %.0.i109 = trunc i32 %.0.in.i108 to i8
  %68 = add nsw i32 %c.04.i97, 1
  %69 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i97
  store i8 %.0.i109, i8* %69, align 1, !tbaa !5
  %70 = lshr i32 %.013.i98, 4
  %71 = icmp eq i32 %70, 0
  br i1 %71, label %._crit_edge.i100, label %.lr.ph5.i99

._crit_edge.i100:                                 ; preds = %.lr.ph5.i99
  %.lcssa163 = phi i32 [ %68, %.lr.ph5.i99 ]
  %c.04.i97.lcssa = phi i32 [ %c.04.i97, %.lr.ph5.i99 ]
  %72 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa163
  store i8 0, i8* %72, align 1, !tbaa !5
  %73 = icmp sgt i32 %c.04.i97.lcssa, -1
  br i1 %73, label %.lr.ph.i104.preheader, label %i2h.exit106

.lr.ph.i104.preheader:                            ; preds = %._crit_edge.i100
  br label %.lr.ph.i104

.lr.ph.i104:                                      ; preds = %.lr.ph.i104, %.lr.ph.i104.preheader
  %.in.i101 = phi i32 [ %74, %.lr.ph.i104 ], [ %.lcssa163, %.lr.ph.i104.preheader ]
  %.12.i102 = phi i32 [ %77, %.lr.ph.i104 ], [ 0, %.lr.ph.i104.preheader ]
  %74 = add nsw i32 %.in.i101, -1
  %75 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %74
  %76 = load i8* %75, align 1, !tbaa !5
  %77 = add i32 %.12.i102, 1
  %78 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i102
  store i8 %76, i8* %78, align 1, !tbaa !5
  %exitcond.i103 = icmp eq i32 %77, %.lcssa163
  br i1 %exitcond.i103, label %i2h.exit106.loopexit, label %.lr.ph.i104

i2h.exit106.loopexit:                             ; preds = %.lr.ph.i104
  br label %i2h.exit106

i2h.exit106:                                      ; preds = %i2h.exit106.loopexit, %._crit_edge.i100, %60
  %.0.i105 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %60 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i100 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit106.loopexit ]
  %79 = load i8* %.0.i105, align 1, !tbaa !5
  %80 = icmp eq i8 %79, 0
  br i1 %80, label %.backedge, label %.lr.ph.i93.preheader

.lr.ph.i93.preheader:                             ; preds = %i2h.exit106
  br label %.lr.ph.i93

.lr.ph.i93:                                       ; preds = %.lr.ph.i93, %.lr.ph.i93.preheader
  %81 = phi i8 [ %84, %.lr.ph.i93 ], [ %79, %.lr.ph.i93.preheader ]
  %.01.i92 = phi i8* [ %82, %.lr.ph.i93 ], [ %.0.i105, %.lr.ph.i93.preheader ]
  %82 = getelementptr inbounds i8* %.01.i92, i32 1
  %83 = sext i8 %81 to i32
  volatile store i32 %83, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %84 = load i8* %82, align 1, !tbaa !5
  %85 = icmp eq i8 %84, 0
  br i1 %85, label %.backedge.loopexit150, label %.lr.ph.i93

; <label>:86                                      ; preds = %10
  %87 = load i8** %arg, align 4
  %88 = bitcast i8* %87 to i32*
  %89 = getelementptr i8* %87, i32 4
  store i8* %89, i8** %arg, align 4
  %90 = load i32* %88, align 4
  %91 = icmp eq i32 %90, 0
  br i1 %91, label %i2h.exit88, label %.lr.ph5.i81.preheader

.lr.ph5.i81.preheader:                            ; preds = %86
  br label %.lr.ph5.i81

.lr.ph5.i81:                                      ; preds = %.lr.ph5.i81, %.lr.ph5.i81.preheader
  %c.04.i79 = phi i32 [ %94, %.lr.ph5.i81 ], [ 0, %.lr.ph5.i81.preheader ]
  %.013.i80 = phi i32 [ %96, %.lr.ph5.i81 ], [ %90, %.lr.ph5.i81.preheader ]
  %92 = and i32 %.013.i80, 15
  %93 = icmp ult i32 %92, 10
  %.0.in.v.i89 = select i1 %93, i32 48, i32 55
  %.0.in.i90 = add nuw nsw i32 %.0.in.v.i89, %92
  %.0.i91 = trunc i32 %.0.in.i90 to i8
  %94 = add nsw i32 %c.04.i79, 1
  %95 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i79
  store i8 %.0.i91, i8* %95, align 1, !tbaa !5
  %96 = lshr i32 %.013.i80, 4
  %97 = icmp eq i32 %96, 0
  br i1 %97, label %._crit_edge.i82, label %.lr.ph5.i81

._crit_edge.i82:                                  ; preds = %.lr.ph5.i81
  %.lcssa162 = phi i32 [ %94, %.lr.ph5.i81 ]
  %c.04.i79.lcssa = phi i32 [ %c.04.i79, %.lr.ph5.i81 ]
  %98 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa162
  store i8 0, i8* %98, align 1, !tbaa !5
  %99 = icmp sgt i32 %c.04.i79.lcssa, -1
  br i1 %99, label %.lr.ph.i86.preheader, label %i2h.exit88

.lr.ph.i86.preheader:                             ; preds = %._crit_edge.i82
  br label %.lr.ph.i86

.lr.ph.i86:                                       ; preds = %.lr.ph.i86, %.lr.ph.i86.preheader
  %.in.i83 = phi i32 [ %100, %.lr.ph.i86 ], [ %.lcssa162, %.lr.ph.i86.preheader ]
  %.12.i84 = phi i32 [ %103, %.lr.ph.i86 ], [ 0, %.lr.ph.i86.preheader ]
  %100 = add nsw i32 %.in.i83, -1
  %101 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %100
  %102 = load i8* %101, align 1, !tbaa !5
  %103 = add i32 %.12.i84, 1
  %104 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i84
  store i8 %102, i8* %104, align 1, !tbaa !5
  %exitcond.i85 = icmp eq i32 %103, %.lcssa162
  br i1 %exitcond.i85, label %i2h.exit88.loopexit, label %.lr.ph.i86

i2h.exit88.loopexit:                              ; preds = %.lr.ph.i86
  br label %i2h.exit88

i2h.exit88:                                       ; preds = %i2h.exit88.loopexit, %._crit_edge.i82, %86
  %.0.i87 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %86 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i82 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit88.loopexit ]
  %105 = load i8* %.0.i87, align 1, !tbaa !5
  %106 = icmp eq i8 %105, 0
  br i1 %106, label %.backedge, label %.lr.ph.i75.preheader

.lr.ph.i75.preheader:                             ; preds = %i2h.exit88
  br label %.lr.ph.i75

.lr.ph.i75:                                       ; preds = %.lr.ph.i75, %.lr.ph.i75.preheader
  %107 = phi i8 [ %110, %.lr.ph.i75 ], [ %105, %.lr.ph.i75.preheader ]
  %.01.i74 = phi i8* [ %108, %.lr.ph.i75 ], [ %.0.i87, %.lr.ph.i75.preheader ]
  %108 = getelementptr inbounds i8* %.01.i74, i32 1
  %109 = sext i8 %107 to i32
  volatile store i32 %109, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %110 = load i8* %108, align 1, !tbaa !5
  %111 = icmp eq i8 %110, 0
  br i1 %111, label %.backedge.loopexit151, label %.lr.ph.i75

; <label>:112                                     ; preds = %10
  %113 = add nsw i32 %.k.1, 1
  %114 = getelementptr inbounds i8* %fmt, i32 %113
  %115 = load i8* %114, align 1, !tbaa !5
  %116 = sext i8 %115 to i32
  switch i32 %116, label %.backedge [
    i32 100, label %117
    i32 120, label %131
    i32 88, label %166
  ]

; <label>:117                                     ; preds = %112
  %118 = load i8** %arg, align 4
  %119 = getelementptr i8* %118, i32 4
  %120 = bitcast i8* %119 to i32*
  %121 = getelementptr i8* %118, i32 8
  store i8* %121, i8** %arg, align 4
  %122 = load i32* %120, align 4
  %123 = call i8* @itoa(i32 %122)
  %124 = load i8* %123, align 1, !tbaa !5
  %125 = icmp eq i8 %124, 0
  br i1 %125, label %.backedge, label %.lr.ph.i67.preheader

.lr.ph.i67.preheader:                             ; preds = %117
  br label %.lr.ph.i67

.lr.ph.i67:                                       ; preds = %.lr.ph.i67, %.lr.ph.i67.preheader
  %126 = phi i8 [ %129, %.lr.ph.i67 ], [ %124, %.lr.ph.i67.preheader ]
  %.01.i66 = phi i8* [ %127, %.lr.ph.i67 ], [ %123, %.lr.ph.i67.preheader ]
  %127 = getelementptr inbounds i8* %.01.i66, i32 1
  %128 = sext i8 %126 to i32
  volatile store i32 %128, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %129 = load i8* %127, align 1, !tbaa !5
  %130 = icmp eq i8 %129, 0
  br i1 %130, label %.backedge.loopexit152, label %.lr.ph.i67

; <label>:131                                     ; preds = %112
  %132 = load i8** %arg, align 4
  %133 = bitcast i8* %132 to i32*
  %134 = getelementptr i8* %132, i32 4
  store i8* %134, i8** %arg, align 4
  %135 = load i32* %133, align 4
  %136 = zext i32 %135 to i64
  %137 = bitcast i8* %134 to i32*
  %138 = getelementptr i8* %132, i32 8
  store i8* %138, i8** %arg, align 4
  %139 = load i32* %137, align 4
  %140 = zext i32 %139 to i64
  %141 = shl nuw i64 %140, 32
  %142 = or i64 %141, %136
  %143 = icmp eq i64 %142, 0
  br i1 %143, label %l2h.exit62, label %.lr.ph5.i56.preheader

.lr.ph5.i56.preheader:                            ; preds = %131
  br label %.lr.ph5.i56

.lr.ph5.i56:                                      ; preds = %.lr.ph5.i56, %.lr.ph5.i56.preheader
  %c.04.i53 = phi i32 [ %146, %.lr.ph5.i56 ], [ 0, %.lr.ph5.i56.preheader ]
  %.013.i54 = phi i64 [ %148, %.lr.ph5.i56 ], [ %142, %.lr.ph5.i56.preheader ]
  %.01.tr.i55 = trunc i64 %.013.i54 to i32
  %144 = and i32 %.01.tr.i55, 15
  %145 = icmp ult i32 %144, 10
  %.0.in.v.i63 = select i1 %145, i32 48, i32 87
  %.0.in.i64 = add nuw nsw i32 %.0.in.v.i63, %144
  %.0.i65 = trunc i32 %.0.in.i64 to i8
  %146 = add nsw i32 %c.04.i53, 1
  %147 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 %c.04.i53
  store i8 %.0.i65, i8* %147, align 1, !tbaa !5
  %148 = lshr i64 %.013.i54, 4
  %149 = icmp eq i64 %148, 0
  br i1 %149, label %._crit_edge.i57, label %.lr.ph5.i56

._crit_edge.i57:                                  ; preds = %.lr.ph5.i56
  %.lcssa161 = phi i32 [ %146, %.lr.ph5.i56 ]
  %c.04.i53.lcssa = phi i32 [ %c.04.i53, %.lr.ph5.i56 ]
  %150 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa161
  store i8 0, i8* %150, align 1, !tbaa !5
  %151 = icmp sgt i32 %c.04.i53.lcssa, -1
  br i1 %151, label %.lr.ph.i60.preheader, label %l2h.exit62

.lr.ph.i60.preheader:                             ; preds = %._crit_edge.i57
  br label %.lr.ph.i60

.lr.ph.i60:                                       ; preds = %.lr.ph.i60..lr.ph.i60_crit_edge, %.lr.ph.i60.preheader
  %.in.i58 = phi i32 [ %152, %.lr.ph.i60..lr.ph.i60_crit_edge ], [ %.lcssa161, %.lr.ph.i60.preheader ]
  %.12.i59 = phi i64 [ %158, %.lr.ph.i60..lr.ph.i60_crit_edge ], [ 0, %.lr.ph.i60.preheader ]
  %152 = add nsw i32 %.in.i58, -1
  %153 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 %152
  %154 = load i8* %153, align 1, !tbaa !5
  %155 = trunc i64 %.12.i59 to i32
  %156 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %155
  store i8 %154, i8* %156, align 1, !tbaa !5
  %157 = icmp sgt i32 %152, 0
  br i1 %157, label %.lr.ph.i60..lr.ph.i60_crit_edge, label %l2h.exit62.loopexit

.lr.ph.i60..lr.ph.i60_crit_edge:                  ; preds = %.lr.ph.i60
  %158 = add i64 %.12.i59, 1
  br label %.lr.ph.i60

l2h.exit62.loopexit:                              ; preds = %.lr.ph.i60
  br label %l2h.exit62

l2h.exit62:                                       ; preds = %l2h.exit62.loopexit, %._crit_edge.i57, %131
  %.0.i61 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %131 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge.i57 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %l2h.exit62.loopexit ]
  %159 = load i8* %.0.i61, align 1, !tbaa !5
  %160 = icmp eq i8 %159, 0
  br i1 %160, label %.backedge, label %.lr.ph.i49.preheader

.lr.ph.i49.preheader:                             ; preds = %l2h.exit62
  br label %.lr.ph.i49

.lr.ph.i49:                                       ; preds = %.lr.ph.i49, %.lr.ph.i49.preheader
  %161 = phi i8 [ %164, %.lr.ph.i49 ], [ %159, %.lr.ph.i49.preheader ]
  %.01.i48 = phi i8* [ %162, %.lr.ph.i49 ], [ %.0.i61, %.lr.ph.i49.preheader ]
  %162 = getelementptr inbounds i8* %.01.i48, i32 1
  %163 = sext i8 %161 to i32
  volatile store i32 %163, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %164 = load i8* %162, align 1, !tbaa !5
  %165 = icmp eq i8 %164, 0
  br i1 %165, label %.backedge.loopexit153, label %.lr.ph.i49

; <label>:166                                     ; preds = %112
  %167 = load i8** %arg, align 4
  %168 = bitcast i8* %167 to i32*
  %169 = getelementptr i8* %167, i32 4
  store i8* %169, i8** %arg, align 4
  %170 = load i32* %168, align 4
  %171 = zext i32 %170 to i64
  %172 = bitcast i8* %169 to i32*
  %173 = getelementptr i8* %167, i32 8
  store i8* %173, i8** %arg, align 4
  %174 = load i32* %172, align 4
  %175 = zext i32 %174 to i64
  %176 = shl nuw i64 %175, 32
  %177 = or i64 %176, %171
  %178 = icmp eq i64 %177, 0
  br i1 %178, label %l2h.exit, label %.lr.ph5.i39.preheader

.lr.ph5.i39.preheader:                            ; preds = %166
  br label %.lr.ph5.i39

.lr.ph5.i39:                                      ; preds = %.lr.ph5.i39, %.lr.ph5.i39.preheader
  %c.04.i37 = phi i32 [ %181, %.lr.ph5.i39 ], [ 0, %.lr.ph5.i39.preheader ]
  %.013.i38 = phi i64 [ %183, %.lr.ph5.i39 ], [ %177, %.lr.ph5.i39.preheader ]
  %.01.tr.i = trunc i64 %.013.i38 to i32
  %179 = and i32 %.01.tr.i, 15
  %180 = icmp ult i32 %179, 10
  %.0.in.v.i45 = select i1 %180, i32 48, i32 55
  %.0.in.i46 = add nuw nsw i32 %.0.in.v.i45, %179
  %.0.i47 = trunc i32 %.0.in.i46 to i8
  %181 = add nsw i32 %c.04.i37, 1
  %182 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 %c.04.i37
  store i8 %.0.i47, i8* %182, align 1, !tbaa !5
  %183 = lshr i64 %.013.i38, 4
  %184 = icmp eq i64 %183, 0
  br i1 %184, label %._crit_edge.i40, label %.lr.ph5.i39

._crit_edge.i40:                                  ; preds = %.lr.ph5.i39
  %.lcssa160 = phi i32 [ %181, %.lr.ph5.i39 ]
  %c.04.i37.lcssa = phi i32 [ %c.04.i37, %.lr.ph5.i39 ]
  %185 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa160
  store i8 0, i8* %185, align 1, !tbaa !5
  %186 = icmp sgt i32 %c.04.i37.lcssa, -1
  br i1 %186, label %.lr.ph.i43.preheader, label %l2h.exit

.lr.ph.i43.preheader:                             ; preds = %._crit_edge.i40
  br label %.lr.ph.i43

.lr.ph.i43:                                       ; preds = %.lr.ph.i43..lr.ph.i43_crit_edge, %.lr.ph.i43.preheader
  %.in.i41 = phi i32 [ %187, %.lr.ph.i43..lr.ph.i43_crit_edge ], [ %.lcssa160, %.lr.ph.i43.preheader ]
  %.12.i42 = phi i64 [ %193, %.lr.ph.i43..lr.ph.i43_crit_edge ], [ 0, %.lr.ph.i43.preheader ]
  %187 = add nsw i32 %.in.i41, -1
  %188 = getelementptr inbounds [17 x i8]* %thex.i36, i32 0, i32 %187
  %189 = load i8* %188, align 1, !tbaa !5
  %190 = trunc i64 %.12.i42 to i32
  %191 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %190
  store i8 %189, i8* %191, align 1, !tbaa !5
  %192 = icmp sgt i32 %187, 0
  br i1 %192, label %.lr.ph.i43..lr.ph.i43_crit_edge, label %l2h.exit.loopexit

.lr.ph.i43..lr.ph.i43_crit_edge:                  ; preds = %.lr.ph.i43
  %193 = add i64 %.12.i42, 1
  br label %.lr.ph.i43

l2h.exit.loopexit:                                ; preds = %.lr.ph.i43
  br label %l2h.exit

l2h.exit:                                         ; preds = %l2h.exit.loopexit, %._crit_edge.i40, %166
  %.0.i44 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %166 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge.i40 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %l2h.exit.loopexit ]
  %194 = load i8* %.0.i44, align 1, !tbaa !5
  %195 = icmp eq i8 %194, 0
  br i1 %195, label %.backedge, label %.lr.ph.i33.preheader

.lr.ph.i33.preheader:                             ; preds = %l2h.exit
  br label %.lr.ph.i33

.lr.ph.i33:                                       ; preds = %.lr.ph.i33, %.lr.ph.i33.preheader
  %196 = phi i8 [ %199, %.lr.ph.i33 ], [ %194, %.lr.ph.i33.preheader ]
  %.01.i32 = phi i8* [ %197, %.lr.ph.i33 ], [ %.0.i44, %.lr.ph.i33.preheader ]
  %197 = getelementptr inbounds i8* %.01.i32, i32 1
  %198 = sext i8 %196 to i32
  volatile store i32 %198, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %199 = load i8* %197, align 1, !tbaa !5
  %200 = icmp eq i8 %199, 0
  br i1 %200, label %.backedge.loopexit154, label %.lr.ph.i33

; <label>:201                                     ; preds = %10
  %202 = load i8** %arg, align 4
  %203 = bitcast i8* %202 to i32*
  %204 = getelementptr i8* %202, i32 4
  store i8* %204, i8** %arg, align 4
  %205 = load i32* %203, align 4
  %206 = add nsw i32 %.k.1, 1
  %207 = getelementptr inbounds i8* %fmt, i32 %206
  %208 = load i8* %207, align 1, !tbaa !5
  %209 = icmp eq i8 %208, 104
  %x.0.v = select i1 %209, i32 255, i32 65535
  %x.0 = and i32 %x.0.v, %205
  %k.3 = select i1 %209, i32 %206, i32 %.k.1
  %210 = add nsw i32 %k.3, 1
  %211 = getelementptr inbounds i8* %fmt, i32 %210
  %212 = load i8* %211, align 1, !tbaa !5
  %213 = sext i8 %212 to i32
  switch i32 %213, label %.backedge [
    i32 100, label %214
    i32 120, label %223
    i32 88, label %245
  ]

; <label>:214                                     ; preds = %201
  %215 = call i8* @itoa(i32 %x.0)
  %216 = load i8* %215, align 1, !tbaa !5
  %217 = icmp eq i8 %216, 0
  br i1 %217, label %.backedge, label %.lr.ph.i25.preheader

.lr.ph.i25.preheader:                             ; preds = %214
  br label %.lr.ph.i25

.lr.ph.i25:                                       ; preds = %.lr.ph.i25, %.lr.ph.i25.preheader
  %218 = phi i8 [ %221, %.lr.ph.i25 ], [ %216, %.lr.ph.i25.preheader ]
  %.01.i24 = phi i8* [ %219, %.lr.ph.i25 ], [ %215, %.lr.ph.i25.preheader ]
  %219 = getelementptr inbounds i8* %.01.i24, i32 1
  %220 = sext i8 %218 to i32
  volatile store i32 %220, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %221 = load i8* %219, align 1, !tbaa !5
  %222 = icmp eq i8 %221, 0
  br i1 %222, label %.backedge.loopexit155, label %.lr.ph.i25

; <label>:223                                     ; preds = %201
  %224 = icmp eq i32 %x.0, 0
  br i1 %224, label %i2h.exit20, label %.lr.ph5.i13.preheader

.lr.ph5.i13.preheader:                            ; preds = %223
  br label %.lr.ph5.i13

.lr.ph5.i13:                                      ; preds = %.lr.ph5.i13, %.lr.ph5.i13.preheader
  %c.04.i11 = phi i32 [ %227, %.lr.ph5.i13 ], [ 0, %.lr.ph5.i13.preheader ]
  %.013.i12 = phi i32 [ %229, %.lr.ph5.i13 ], [ %x.0, %.lr.ph5.i13.preheader ]
  %225 = and i32 %.013.i12, 15
  %226 = icmp ult i32 %225, 10
  %.0.in.v.i21 = select i1 %226, i32 48, i32 87
  %.0.in.i22 = add nuw nsw i32 %.0.in.v.i21, %225
  %.0.i23 = trunc i32 %.0.in.i22 to i8
  %227 = add nsw i32 %c.04.i11, 1
  %228 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i11
  store i8 %.0.i23, i8* %228, align 1, !tbaa !5
  %229 = lshr i32 %.013.i12, 4
  %230 = icmp eq i32 %229, 0
  br i1 %230, label %._crit_edge.i14, label %.lr.ph5.i13

._crit_edge.i14:                                  ; preds = %.lr.ph5.i13
  %.lcssa159 = phi i32 [ %227, %.lr.ph5.i13 ]
  %c.04.i11.lcssa = phi i32 [ %c.04.i11, %.lr.ph5.i13 ]
  %231 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa159
  store i8 0, i8* %231, align 1, !tbaa !5
  %232 = icmp sgt i32 %c.04.i11.lcssa, -1
  br i1 %232, label %.lr.ph.i18.preheader, label %i2h.exit20

.lr.ph.i18.preheader:                             ; preds = %._crit_edge.i14
  br label %.lr.ph.i18

.lr.ph.i18:                                       ; preds = %.lr.ph.i18, %.lr.ph.i18.preheader
  %.in.i15 = phi i32 [ %233, %.lr.ph.i18 ], [ %.lcssa159, %.lr.ph.i18.preheader ]
  %.12.i16 = phi i32 [ %236, %.lr.ph.i18 ], [ 0, %.lr.ph.i18.preheader ]
  %233 = add nsw i32 %.in.i15, -1
  %234 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %233
  %235 = load i8* %234, align 1, !tbaa !5
  %236 = add i32 %.12.i16, 1
  %237 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i16
  store i8 %235, i8* %237, align 1, !tbaa !5
  %exitcond.i17 = icmp eq i32 %236, %.lcssa159
  br i1 %exitcond.i17, label %i2h.exit20.loopexit, label %.lr.ph.i18

i2h.exit20.loopexit:                              ; preds = %.lr.ph.i18
  br label %i2h.exit20

i2h.exit20:                                       ; preds = %i2h.exit20.loopexit, %._crit_edge.i14, %223
  %.0.i19 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %223 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i14 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit20.loopexit ]
  %238 = load i8* %.0.i19, align 1, !tbaa !5
  %239 = icmp eq i8 %238, 0
  br i1 %239, label %.backedge, label %.lr.ph.i7.preheader

.lr.ph.i7.preheader:                              ; preds = %i2h.exit20
  br label %.lr.ph.i7

.lr.ph.i7:                                        ; preds = %.lr.ph.i7, %.lr.ph.i7.preheader
  %240 = phi i8 [ %243, %.lr.ph.i7 ], [ %238, %.lr.ph.i7.preheader ]
  %.01.i6 = phi i8* [ %241, %.lr.ph.i7 ], [ %.0.i19, %.lr.ph.i7.preheader ]
  %241 = getelementptr inbounds i8* %.01.i6, i32 1
  %242 = sext i8 %240 to i32
  volatile store i32 %242, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %243 = load i8* %241, align 1, !tbaa !5
  %244 = icmp eq i8 %243, 0
  br i1 %244, label %.backedge.loopexit156, label %.lr.ph.i7

; <label>:245                                     ; preds = %201
  %246 = icmp eq i32 %x.0, 0
  br i1 %246, label %i2h.exit, label %.lr.ph5.i.preheader

.lr.ph5.i.preheader:                              ; preds = %245
  br label %.lr.ph5.i

.lr.ph5.i:                                        ; preds = %.lr.ph5.i, %.lr.ph5.i.preheader
  %c.04.i = phi i32 [ %249, %.lr.ph5.i ], [ 0, %.lr.ph5.i.preheader ]
  %.013.i = phi i32 [ %251, %.lr.ph5.i ], [ %x.0, %.lr.ph5.i.preheader ]
  %247 = and i32 %.013.i, 15
  %248 = icmp ult i32 %247, 10
  %.0.in.v.i = select i1 %248, i32 48, i32 55
  %.0.in.i = add nuw nsw i32 %.0.in.v.i, %247
  %.0.i5 = trunc i32 %.0.in.i to i8
  %249 = add nsw i32 %c.04.i, 1
  %250 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i
  store i8 %.0.i5, i8* %250, align 1, !tbaa !5
  %251 = lshr i32 %.013.i, 4
  %252 = icmp eq i32 %251, 0
  br i1 %252, label %._crit_edge.i, label %.lr.ph5.i

._crit_edge.i:                                    ; preds = %.lr.ph5.i
  %.lcssa158 = phi i32 [ %249, %.lr.ph5.i ]
  %c.04.i.lcssa = phi i32 [ %c.04.i, %.lr.ph5.i ]
  %253 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa158
  store i8 0, i8* %253, align 1, !tbaa !5
  %254 = icmp sgt i32 %c.04.i.lcssa, -1
  br i1 %254, label %.lr.ph.i4.preheader, label %i2h.exit

.lr.ph.i4.preheader:                              ; preds = %._crit_edge.i
  br label %.lr.ph.i4

.lr.ph.i4:                                        ; preds = %.lr.ph.i4, %.lr.ph.i4.preheader
  %.in.i = phi i32 [ %255, %.lr.ph.i4 ], [ %.lcssa158, %.lr.ph.i4.preheader ]
  %.12.i = phi i32 [ %258, %.lr.ph.i4 ], [ 0, %.lr.ph.i4.preheader ]
  %255 = add nsw i32 %.in.i, -1
  %256 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %255
  %257 = load i8* %256, align 1, !tbaa !5
  %258 = add i32 %.12.i, 1
  %259 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i
  store i8 %257, i8* %259, align 1, !tbaa !5
  %exitcond.i = icmp eq i32 %258, %.lcssa158
  br i1 %exitcond.i, label %i2h.exit.loopexit, label %.lr.ph.i4

i2h.exit.loopexit:                                ; preds = %.lr.ph.i4
  br label %i2h.exit

i2h.exit:                                         ; preds = %i2h.exit.loopexit, %._crit_edge.i, %245
  %.0.i = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %245 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit.loopexit ]
  %260 = load i8* %.0.i, align 1, !tbaa !5
  %261 = icmp eq i8 %260, 0
  br i1 %261, label %.backedge, label %.lr.ph.i2.preheader

.lr.ph.i2.preheader:                              ; preds = %i2h.exit
  br label %.lr.ph.i2

.lr.ph.i2:                                        ; preds = %.lr.ph.i2, %.lr.ph.i2.preheader
  %262 = phi i8 [ %265, %.lr.ph.i2 ], [ %260, %.lr.ph.i2.preheader ]
  %.01.i1 = phi i8* [ %263, %.lr.ph.i2 ], [ %.0.i, %.lr.ph.i2.preheader ]
  %263 = getelementptr inbounds i8* %.01.i1, i32 1
  %264 = sext i8 %262 to i32
  volatile store i32 %264, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %265 = load i8* %263, align 1, !tbaa !5
  %266 = icmp eq i8 %265, 0
  br i1 %266, label %.backedge.loopexit157, label %.lr.ph.i2

; <label>:267                                     ; preds = %10
  volatile store i32 37, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  br label %.backedge

; <label>:268                                     ; preds = %10
  volatile store i32 37, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  %269 = load i8* %13, align 1, !tbaa !5
  %270 = sext i8 %269 to i32
  volatile store i32 %270, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  br label %.backedge

; <label>:271                                     ; preds = %4
  %272 = sext i8 %6 to i32
  volatile store i32 %272, i32* inttoptr (i32 -1342177280 to i32*), align 268435456, !tbaa !1
  br label %.backedge

.backedge.loopexit:                               ; preds = %.lr.ph.i
  br label %.backedge

.backedge.loopexit148:                            ; preds = %.lr.ph.i29
  br label %.backedge

.backedge.loopexit149:                            ; preds = %.lr.ph.i71
  br label %.backedge

.backedge.loopexit150:                            ; preds = %.lr.ph.i93
  br label %.backedge

.backedge.loopexit151:                            ; preds = %.lr.ph.i75
  br label %.backedge

.backedge.loopexit152:                            ; preds = %.lr.ph.i67
  br label %.backedge

.backedge.loopexit153:                            ; preds = %.lr.ph.i49
  br label %.backedge

.backedge.loopexit154:                            ; preds = %.lr.ph.i33
  br label %.backedge

.backedge.loopexit155:                            ; preds = %.lr.ph.i25
  br label %.backedge

.backedge.loopexit156:                            ; preds = %.lr.ph.i7
  br label %.backedge

.backedge.loopexit157:                            ; preds = %.lr.ph.i2
  br label %.backedge

.backedge:                                        ; preds = %.backedge.loopexit157, %.backedge.loopexit156, %.backedge.loopexit155, %.backedge.loopexit154, %.backedge.loopexit153, %.backedge.loopexit152, %.backedge.loopexit151, %.backedge.loopexit150, %.backedge.loopexit149, %.backedge.loopexit148, %.backedge.loopexit, %271, %268, %267, %i2h.exit, %i2h.exit20, %214, %201, %l2h.exit, %l2h.exit62, %117, %112, %i2h.exit88, %i2h.exit106, %54, %42, %29, %16
  %k.0.be.in = phi i32 [ %k.0, %271 ], [ %.k.1, %268 ], [ %.k.1, %267 ], [ %210, %201 ], [ %.k.1, %112 ], [ %.k.1, %54 ], [ %.k.1, %16 ], [ %.k.1, %29 ], [ %.k.1, %42 ], [ %.k.1, %i2h.exit106 ], [ %.k.1, %i2h.exit88 ], [ %113, %117 ], [ %113, %l2h.exit62 ], [ %113, %l2h.exit ], [ %210, %214 ], [ %210, %i2h.exit20 ], [ %210, %i2h.exit ], [ %.k.1, %.backedge.loopexit ], [ %.k.1, %.backedge.loopexit148 ], [ %.k.1, %.backedge.loopexit149 ], [ %.k.1, %.backedge.loopexit150 ], [ %.k.1, %.backedge.loopexit151 ], [ %113, %.backedge.loopexit152 ], [ %113, %.backedge.loopexit153 ], [ %113, %.backedge.loopexit154 ], [ %210, %.backedge.loopexit155 ], [ %210, %.backedge.loopexit156 ], [ %210, %.backedge.loopexit157 ]
  %k.0.be = add nsw i32 %k.0.be.in, 1
  br label %4

; <label>:273                                     ; preds = %4
  call void @llvm.va_end(i8* %1)
  ret i32 0
}

declare void @llvm.va_start(i8*)

declare void @llvm.va_end(i8*)

define void @exit(i32 %a) {
  %1 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([33 x i8]* @.str1, i32 0, i32 0), i32 %a)
  br label %2

; <label>:2                                       ; preds = %2, %0
  br label %2
}

declare void @llvm.lifetime.start(i64, i8*)

declare void @llvm.lifetime.end(i64, i8*)


!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{metadata !2, metadata !2, i64 0}
!2 = metadata !{metadata !"int", metadata !3, i64 0}
!3 = metadata !{metadata !"omnipotent char", metadata !4, i64 0}
!4 = metadata !{metadata !"Simple C/C++ TBAA"}
!5 = metadata !{metadata !3, metadata !3, i64 0}
