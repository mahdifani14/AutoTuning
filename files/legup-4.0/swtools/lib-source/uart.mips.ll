; ModuleID = 'uart.mips.bc'
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
  br label %1

; <label>:1                                       ; preds = %1, %0
  %2 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %3 = icmp ult i32 %2, 65536
  br i1 %3, label %1, label %4

; <label>:4                                       ; preds = %1
  %5 = sext i8 %c to i32
  volatile store i32 %5, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  ret void
}

define void @print_uart(i8* %ptr) {
  %1 = load i8* %ptr, align 1, !tbaa !5
  %2 = icmp eq i8 %1, 0
  br i1 %2, label %._crit_edge, label %.lr.ph.preheader

.lr.ph.preheader:                                 ; preds = %0
  br label %.lr.ph

.lr.ph:                                           ; preds = %printc_uart.exit, %.lr.ph.preheader
  %3 = phi i8 [ %9, %printc_uart.exit ], [ %1, %.lr.ph.preheader ]
  %.01 = phi i8* [ %7, %printc_uart.exit ], [ %ptr, %.lr.ph.preheader ]
  br label %4

; <label>:4                                       ; preds = %4, %.lr.ph
  %5 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %6 = icmp ult i32 %5, 65536
  br i1 %6, label %4, label %printc_uart.exit

printc_uart.exit:                                 ; preds = %4
  %7 = getelementptr inbounds i8* %.01, i32 1
  %8 = sext i8 %3 to i32
  volatile store i32 %8, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %9 = load i8* %7, align 1, !tbaa !5
  %10 = icmp eq i8 %9, 0
  br i1 %10, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %printc_uart.exit
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
  br label %1

; <label>:1                                       ; preds = %printc_uart.exit3, %0
  %k.0 = phi i32 [ 0, %0 ], [ %14, %printc_uart.exit3 ]
  %prev_r.0 = phi i32 [ 0, %0 ], [ %prev_r.15, %printc_uart.exit3 ]
  %2 = getelementptr inbounds i8* %fmt, i32 %k.0
  %3 = load i8* %2, align 1, !tbaa !5
  switch i8 %3, label %4 [
    i8 0, label %.preheader.preheader
    i8 13, label %.thread
  ]

.preheader.preheader:                             ; preds = %1
  br label %.preheader

; <label>:4                                       ; preds = %1
  %5 = icmp ne i8 %3, 10
  %6 = icmp ne i32 %prev_r.0, 0
  %or.cond = or i1 %5, %6
  br i1 %or.cond, label %.thread, label %.preheader6.preheader

.preheader6.preheader:                            ; preds = %4
  br label %.preheader6

.preheader6:                                      ; preds = %.preheader6, %.preheader6.preheader
  %7 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %8 = icmp ult i32 %7, 65536
  br i1 %8, label %.preheader6, label %printc_uart.exit

printc_uart.exit:                                 ; preds = %.preheader6
  volatile store i32 13, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %.pre = load i8* %2, align 1, !tbaa !5
  br label %.thread

.thread:                                          ; preds = %printc_uart.exit, %4, %1
  %9 = phi i8 [ %3, %4 ], [ %.pre, %printc_uart.exit ], [ 13, %1 ]
  %prev_r.15 = phi i32 [ %prev_r.0, %4 ], [ 0, %printc_uart.exit ], [ 1, %1 ]
  br label %10

; <label>:10                                      ; preds = %10, %.thread
  %11 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %12 = icmp ult i32 %11, 65536
  br i1 %12, label %10, label %printc_uart.exit3

printc_uart.exit3:                                ; preds = %10
  %13 = sext i8 %9 to i32
  volatile store i32 %13, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %14 = add nsw i32 %k.0, 1
  br label %1

.preheader:                                       ; preds = %.preheader, %.preheader.preheader
  %15 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %16 = icmp ult i32 %15, 65536
  br i1 %16, label %.preheader, label %printc_uart.exit2

printc_uart.exit2:                                ; preds = %.preheader
  volatile store i32 10, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  ret i32 0
}

define i32 @printf(i8* %fmt, ...) {
  %thex.i46 = alloca [17 x i8], align 1
  %thex.i = alloca [9 x i8], align 1
  %arg = alloca i8*, align 4
  %1 = bitcast i8** %arg to i8*
  call void @llvm.va_start(i8* %1)
  %2 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 0
  %3 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 0
  br label %.outer

.outer:                                           ; preds = %printc_uart.exit, %0
  %k.0.ph = phi i32 [ %323, %printc_uart.exit ], [ 0, %0 ]
  %prev_r.0.ph = phi i32 [ %prev_r.1127, %printc_uart.exit ], [ 0, %0 ]
  br label %4

; <label>:4                                       ; preds = %print_uart.exit, %.outer
  %k.0 = phi i32 [ %312, %print_uart.exit ], [ %k.0.ph, %.outer ]
  %5 = getelementptr inbounds i8* %fmt, i32 %k.0
  %6 = load i8* %5, align 1, !tbaa !5
  switch i8 %6, label %313 [
    i8 0, label %324
    i8 37, label %.preheader140.preheader
    i8 13, label %.thread.loopexit
  ]

.preheader140.preheader:                          ; preds = %4
  br label %.preheader140

.preheader140:                                    ; preds = %.preheader140, %.preheader140.preheader
  %k.1.in = phi i32 [ %k.1, %.preheader140 ], [ %k.0, %.preheader140.preheader ]
  %k.1 = add nsw i32 %k.1.in, 1
  %7 = getelementptr inbounds i8* %fmt, i32 %k.1
  %8 = load i8* %7, align 1, !tbaa !5
  %.off = add i8 %8, -48
  %9 = icmp ult i8 %.off, 10
  br i1 %9, label %.preheader140, label %10

; <label>:10                                      ; preds = %.preheader140
  %.lcssa = phi i8 [ %8, %.preheader140 ]
  %k.1.lcssa = phi i32 [ %k.1, %.preheader140 ]
  %k.1.in.lcssa = phi i32 [ %k.1.in, %.preheader140 ]
  %11 = icmp eq i8 %.lcssa, 108
  %12 = add nsw i32 %k.1.in.lcssa, 2
  %.k.1 = select i1 %11, i32 %12, i32 %k.1.lcssa
  %13 = getelementptr inbounds i8* %fmt, i32 %.k.1
  %14 = load i8* %13, align 1, !tbaa !5
  %15 = sext i8 %14 to i32
  switch i32 %15, label %.preheader128.preheader [
    i32 100, label %16
    i32 117, label %32
    i32 115, label %48
    i32 99, label %63
    i32 120, label %72
    i32 88, label %101
    i32 108, label %130
    i32 104, label %228
    i32 37, label %.preheader139.preheader
  ]

.preheader139.preheader:                          ; preds = %10
  br label %.preheader139

.preheader128.preheader:                          ; preds = %10
  br label %.preheader128

; <label>:16                                      ; preds = %10
  %17 = load i8** %arg, align 4
  %18 = bitcast i8* %17 to i32*
  %19 = getelementptr i8* %17, i32 4
  store i8* %19, i8** %arg, align 4
  %20 = load i32* %18, align 4
  %21 = call i8* @itoa(i32 %20)
  %22 = load i8* %21, align 1, !tbaa !5
  %23 = icmp eq i8 %22, 0
  br i1 %23, label %print_uart.exit, label %.lr.ph.i.preheader

.lr.ph.i.preheader:                               ; preds = %16
  br label %.lr.ph.i

.lr.ph.i:                                         ; preds = %printc_uart.exit.i, %.lr.ph.i.preheader
  %24 = phi i8 [ %30, %printc_uart.exit.i ], [ %22, %.lr.ph.i.preheader ]
  %.01.i = phi i8* [ %28, %printc_uart.exit.i ], [ %21, %.lr.ph.i.preheader ]
  br label %25

; <label>:25                                      ; preds = %25, %.lr.ph.i
  %26 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %27 = icmp ult i32 %26, 65536
  br i1 %27, label %25, label %printc_uart.exit.i

printc_uart.exit.i:                               ; preds = %25
  %28 = getelementptr inbounds i8* %.01.i, i32 1
  %29 = sext i8 %24 to i32
  volatile store i32 %29, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %30 = load i8* %28, align 1, !tbaa !5
  %31 = icmp eq i8 %30, 0
  br i1 %31, label %print_uart.exit.loopexit, label %.lr.ph.i

; <label>:32                                      ; preds = %10
  %33 = load i8** %arg, align 4
  %34 = bitcast i8* %33 to i32*
  %35 = getelementptr i8* %33, i32 4
  store i8* %35, i8** %arg, align 4
  %36 = load i32* %34, align 4
  %37 = call i8* @utoa(i32 %36)
  %38 = load i8* %37, align 1, !tbaa !5
  %39 = icmp eq i8 %38, 0
  br i1 %39, label %print_uart.exit, label %.lr.ph.i37.preheader

.lr.ph.i37.preheader:                             ; preds = %32
  br label %.lr.ph.i37

.lr.ph.i37:                                       ; preds = %printc_uart.exit.i38, %.lr.ph.i37.preheader
  %40 = phi i8 [ %46, %printc_uart.exit.i38 ], [ %38, %.lr.ph.i37.preheader ]
  %.01.i36 = phi i8* [ %44, %printc_uart.exit.i38 ], [ %37, %.lr.ph.i37.preheader ]
  br label %41

; <label>:41                                      ; preds = %41, %.lr.ph.i37
  %42 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %43 = icmp ult i32 %42, 65536
  br i1 %43, label %41, label %printc_uart.exit.i38

printc_uart.exit.i38:                             ; preds = %41
  %44 = getelementptr inbounds i8* %.01.i36, i32 1
  %45 = sext i8 %40 to i32
  volatile store i32 %45, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %46 = load i8* %44, align 1, !tbaa !5
  %47 = icmp eq i8 %46, 0
  br i1 %47, label %print_uart.exit.loopexit190, label %.lr.ph.i37

; <label>:48                                      ; preds = %10
  %49 = load i8** %arg, align 4
  %50 = bitcast i8* %49 to i8**
  %51 = getelementptr i8* %49, i32 4
  store i8* %51, i8** %arg, align 4
  %52 = load i8** %50, align 4
  %53 = load i8* %52, align 1, !tbaa !5
  %54 = icmp eq i8 %53, 0
  br i1 %54, label %print_uart.exit, label %.lr.ph.i83.preheader

.lr.ph.i83.preheader:                             ; preds = %48
  br label %.lr.ph.i83

.lr.ph.i83:                                       ; preds = %printc_uart.exit.i84, %.lr.ph.i83.preheader
  %55 = phi i8 [ %61, %printc_uart.exit.i84 ], [ %53, %.lr.ph.i83.preheader ]
  %.01.i82 = phi i8* [ %59, %printc_uart.exit.i84 ], [ %52, %.lr.ph.i83.preheader ]
  br label %56

; <label>:56                                      ; preds = %56, %.lr.ph.i83
  %57 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %58 = icmp ult i32 %57, 65536
  br i1 %58, label %56, label %printc_uart.exit.i84

printc_uart.exit.i84:                             ; preds = %56
  %59 = getelementptr inbounds i8* %.01.i82, i32 1
  %60 = sext i8 %55 to i32
  volatile store i32 %60, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %61 = load i8* %59, align 1, !tbaa !5
  %62 = icmp eq i8 %61, 0
  br i1 %62, label %print_uart.exit.loopexit191, label %.lr.ph.i83

; <label>:63                                      ; preds = %10
  %64 = load i8** %arg, align 4
  %65 = bitcast i8* %64 to i32*
  %66 = getelementptr i8* %64, i32 4
  store i8* %66, i8** %arg, align 4
  %67 = load i32* %65, align 4
  br label %68

; <label>:68                                      ; preds = %68, %63
  %69 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %70 = icmp ult i32 %69, 65536
  br i1 %70, label %68, label %printc_uart.exit125

printc_uart.exit125:                              ; preds = %68
  %sext = shl i32 %67, 24
  %71 = ashr exact i32 %sext, 24
  volatile store i32 %71, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  br label %print_uart.exit

; <label>:72                                      ; preds = %10
  %73 = load i8** %arg, align 4
  %74 = bitcast i8* %73 to i32*
  %75 = getelementptr i8* %73, i32 4
  store i8* %75, i8** %arg, align 4
  %76 = load i32* %74, align 4
  %77 = icmp eq i32 %76, 0
  br i1 %77, label %i2h.exit121, label %.lr.ph5.i114.preheader

.lr.ph5.i114.preheader:                           ; preds = %72
  br label %.lr.ph5.i114

.lr.ph5.i114:                                     ; preds = %.lr.ph5.i114, %.lr.ph5.i114.preheader
  %c.04.i112 = phi i32 [ %80, %.lr.ph5.i114 ], [ 0, %.lr.ph5.i114.preheader ]
  %.013.i113 = phi i32 [ %82, %.lr.ph5.i114 ], [ %76, %.lr.ph5.i114.preheader ]
  %78 = and i32 %.013.i113, 15
  %79 = icmp ult i32 %78, 10
  %.0.in.v.i122 = select i1 %79, i32 48, i32 87
  %.0.in.i123 = add nuw nsw i32 %.0.in.v.i122, %78
  %.0.i124 = trunc i32 %.0.in.i123 to i8
  %80 = add nsw i32 %c.04.i112, 1
  %81 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i112
  store i8 %.0.i124, i8* %81, align 1, !tbaa !5
  %82 = lshr i32 %.013.i113, 4
  %83 = icmp eq i32 %82, 0
  br i1 %83, label %._crit_edge.i115, label %.lr.ph5.i114

._crit_edge.i115:                                 ; preds = %.lr.ph5.i114
  %.lcssa205 = phi i32 [ %80, %.lr.ph5.i114 ]
  %c.04.i112.lcssa = phi i32 [ %c.04.i112, %.lr.ph5.i114 ]
  %84 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa205
  store i8 0, i8* %84, align 1, !tbaa !5
  %85 = icmp sgt i32 %c.04.i112.lcssa, -1
  br i1 %85, label %.lr.ph.i119.preheader, label %i2h.exit121

.lr.ph.i119.preheader:                            ; preds = %._crit_edge.i115
  br label %.lr.ph.i119

.lr.ph.i119:                                      ; preds = %.lr.ph.i119, %.lr.ph.i119.preheader
  %.in.i116 = phi i32 [ %86, %.lr.ph.i119 ], [ %.lcssa205, %.lr.ph.i119.preheader ]
  %.12.i117 = phi i32 [ %89, %.lr.ph.i119 ], [ 0, %.lr.ph.i119.preheader ]
  %86 = add nsw i32 %.in.i116, -1
  %87 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %86
  %88 = load i8* %87, align 1, !tbaa !5
  %89 = add i32 %.12.i117, 1
  %90 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i117
  store i8 %88, i8* %90, align 1, !tbaa !5
  %exitcond.i118 = icmp eq i32 %89, %.lcssa205
  br i1 %exitcond.i118, label %i2h.exit121.loopexit, label %.lr.ph.i119

i2h.exit121.loopexit:                             ; preds = %.lr.ph.i119
  br label %i2h.exit121

i2h.exit121:                                      ; preds = %i2h.exit121.loopexit, %._crit_edge.i115, %72
  %.0.i120 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %72 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i115 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit121.loopexit ]
  %91 = load i8* %.0.i120, align 1, !tbaa !5
  %92 = icmp eq i8 %91, 0
  br i1 %92, label %print_uart.exit, label %.lr.ph.i107.preheader

.lr.ph.i107.preheader:                            ; preds = %i2h.exit121
  br label %.lr.ph.i107

.lr.ph.i107:                                      ; preds = %printc_uart.exit.i108, %.lr.ph.i107.preheader
  %93 = phi i8 [ %99, %printc_uart.exit.i108 ], [ %91, %.lr.ph.i107.preheader ]
  %.01.i106 = phi i8* [ %97, %printc_uart.exit.i108 ], [ %.0.i120, %.lr.ph.i107.preheader ]
  br label %94

; <label>:94                                      ; preds = %94, %.lr.ph.i107
  %95 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %96 = icmp ult i32 %95, 65536
  br i1 %96, label %94, label %printc_uart.exit.i108

printc_uart.exit.i108:                            ; preds = %94
  %97 = getelementptr inbounds i8* %.01.i106, i32 1
  %98 = sext i8 %93 to i32
  volatile store i32 %98, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %99 = load i8* %97, align 1, !tbaa !5
  %100 = icmp eq i8 %99, 0
  br i1 %100, label %print_uart.exit.loopexit192, label %.lr.ph.i107

; <label>:101                                     ; preds = %10
  %102 = load i8** %arg, align 4
  %103 = bitcast i8* %102 to i32*
  %104 = getelementptr i8* %102, i32 4
  store i8* %104, i8** %arg, align 4
  %105 = load i32* %103, align 4
  %106 = icmp eq i32 %105, 0
  br i1 %106, label %i2h.exit102, label %.lr.ph5.i95.preheader

.lr.ph5.i95.preheader:                            ; preds = %101
  br label %.lr.ph5.i95

.lr.ph5.i95:                                      ; preds = %.lr.ph5.i95, %.lr.ph5.i95.preheader
  %c.04.i93 = phi i32 [ %109, %.lr.ph5.i95 ], [ 0, %.lr.ph5.i95.preheader ]
  %.013.i94 = phi i32 [ %111, %.lr.ph5.i95 ], [ %105, %.lr.ph5.i95.preheader ]
  %107 = and i32 %.013.i94, 15
  %108 = icmp ult i32 %107, 10
  %.0.in.v.i103 = select i1 %108, i32 48, i32 55
  %.0.in.i104 = add nuw nsw i32 %.0.in.v.i103, %107
  %.0.i105 = trunc i32 %.0.in.i104 to i8
  %109 = add nsw i32 %c.04.i93, 1
  %110 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i93
  store i8 %.0.i105, i8* %110, align 1, !tbaa !5
  %111 = lshr i32 %.013.i94, 4
  %112 = icmp eq i32 %111, 0
  br i1 %112, label %._crit_edge.i96, label %.lr.ph5.i95

._crit_edge.i96:                                  ; preds = %.lr.ph5.i95
  %.lcssa204 = phi i32 [ %109, %.lr.ph5.i95 ]
  %c.04.i93.lcssa = phi i32 [ %c.04.i93, %.lr.ph5.i95 ]
  %113 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa204
  store i8 0, i8* %113, align 1, !tbaa !5
  %114 = icmp sgt i32 %c.04.i93.lcssa, -1
  br i1 %114, label %.lr.ph.i100.preheader, label %i2h.exit102

.lr.ph.i100.preheader:                            ; preds = %._crit_edge.i96
  br label %.lr.ph.i100

.lr.ph.i100:                                      ; preds = %.lr.ph.i100, %.lr.ph.i100.preheader
  %.in.i97 = phi i32 [ %115, %.lr.ph.i100 ], [ %.lcssa204, %.lr.ph.i100.preheader ]
  %.12.i98 = phi i32 [ %118, %.lr.ph.i100 ], [ 0, %.lr.ph.i100.preheader ]
  %115 = add nsw i32 %.in.i97, -1
  %116 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %115
  %117 = load i8* %116, align 1, !tbaa !5
  %118 = add i32 %.12.i98, 1
  %119 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i98
  store i8 %117, i8* %119, align 1, !tbaa !5
  %exitcond.i99 = icmp eq i32 %118, %.lcssa204
  br i1 %exitcond.i99, label %i2h.exit102.loopexit, label %.lr.ph.i100

i2h.exit102.loopexit:                             ; preds = %.lr.ph.i100
  br label %i2h.exit102

i2h.exit102:                                      ; preds = %i2h.exit102.loopexit, %._crit_edge.i96, %101
  %.0.i101 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %101 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i96 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit102.loopexit ]
  %120 = load i8* %.0.i101, align 1, !tbaa !5
  %121 = icmp eq i8 %120, 0
  br i1 %121, label %print_uart.exit, label %.lr.ph.i88.preheader

.lr.ph.i88.preheader:                             ; preds = %i2h.exit102
  br label %.lr.ph.i88

.lr.ph.i88:                                       ; preds = %printc_uart.exit.i89, %.lr.ph.i88.preheader
  %122 = phi i8 [ %128, %printc_uart.exit.i89 ], [ %120, %.lr.ph.i88.preheader ]
  %.01.i87 = phi i8* [ %126, %printc_uart.exit.i89 ], [ %.0.i101, %.lr.ph.i88.preheader ]
  br label %123

; <label>:123                                     ; preds = %123, %.lr.ph.i88
  %124 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %125 = icmp ult i32 %124, 65536
  br i1 %125, label %123, label %printc_uart.exit.i89

printc_uart.exit.i89:                             ; preds = %123
  %126 = getelementptr inbounds i8* %.01.i87, i32 1
  %127 = sext i8 %122 to i32
  volatile store i32 %127, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %128 = load i8* %126, align 1, !tbaa !5
  %129 = icmp eq i8 %128, 0
  br i1 %129, label %print_uart.exit.loopexit193, label %.lr.ph.i88

; <label>:130                                     ; preds = %10
  %131 = add nsw i32 %.k.1, 1
  %132 = getelementptr inbounds i8* %fmt, i32 %131
  %133 = load i8* %132, align 1, !tbaa !5
  %134 = sext i8 %133 to i32
  switch i32 %134, label %print_uart.exit [
    i32 100, label %135
    i32 120, label %152
    i32 88, label %190
  ]

; <label>:135                                     ; preds = %130
  %136 = load i8** %arg, align 4
  %137 = getelementptr i8* %136, i32 4
  %138 = bitcast i8* %137 to i32*
  %139 = getelementptr i8* %136, i32 8
  store i8* %139, i8** %arg, align 4
  %140 = load i32* %138, align 4
  %141 = call i8* @itoa(i32 %140)
  %142 = load i8* %141, align 1, !tbaa !5
  %143 = icmp eq i8 %142, 0
  br i1 %143, label %print_uart.exit, label %.lr.ph.i78.preheader

.lr.ph.i78.preheader:                             ; preds = %135
  br label %.lr.ph.i78

.lr.ph.i78:                                       ; preds = %printc_uart.exit.i79, %.lr.ph.i78.preheader
  %144 = phi i8 [ %150, %printc_uart.exit.i79 ], [ %142, %.lr.ph.i78.preheader ]
  %.01.i77 = phi i8* [ %148, %printc_uart.exit.i79 ], [ %141, %.lr.ph.i78.preheader ]
  br label %145

; <label>:145                                     ; preds = %145, %.lr.ph.i78
  %146 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %147 = icmp ult i32 %146, 65536
  br i1 %147, label %145, label %printc_uart.exit.i79

printc_uart.exit.i79:                             ; preds = %145
  %148 = getelementptr inbounds i8* %.01.i77, i32 1
  %149 = sext i8 %144 to i32
  volatile store i32 %149, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %150 = load i8* %148, align 1, !tbaa !5
  %151 = icmp eq i8 %150, 0
  br i1 %151, label %print_uart.exit.loopexit194, label %.lr.ph.i78

; <label>:152                                     ; preds = %130
  %153 = load i8** %arg, align 4
  %154 = bitcast i8* %153 to i32*
  %155 = getelementptr i8* %153, i32 4
  store i8* %155, i8** %arg, align 4
  %156 = load i32* %154, align 4
  %157 = zext i32 %156 to i64
  %158 = bitcast i8* %155 to i32*
  %159 = getelementptr i8* %153, i32 8
  store i8* %159, i8** %arg, align 4
  %160 = load i32* %158, align 4
  %161 = zext i32 %160 to i64
  %162 = shl nuw i64 %161, 32
  %163 = or i64 %162, %157
  %164 = icmp eq i64 %163, 0
  br i1 %164, label %l2h.exit73, label %.lr.ph5.i67.preheader

.lr.ph5.i67.preheader:                            ; preds = %152
  br label %.lr.ph5.i67

.lr.ph5.i67:                                      ; preds = %.lr.ph5.i67, %.lr.ph5.i67.preheader
  %c.04.i64 = phi i32 [ %167, %.lr.ph5.i67 ], [ 0, %.lr.ph5.i67.preheader ]
  %.013.i65 = phi i64 [ %169, %.lr.ph5.i67 ], [ %163, %.lr.ph5.i67.preheader ]
  %.01.tr.i66 = trunc i64 %.013.i65 to i32
  %165 = and i32 %.01.tr.i66, 15
  %166 = icmp ult i32 %165, 10
  %.0.in.v.i74 = select i1 %166, i32 48, i32 87
  %.0.in.i75 = add nuw nsw i32 %.0.in.v.i74, %165
  %.0.i76 = trunc i32 %.0.in.i75 to i8
  %167 = add nsw i32 %c.04.i64, 1
  %168 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 %c.04.i64
  store i8 %.0.i76, i8* %168, align 1, !tbaa !5
  %169 = lshr i64 %.013.i65, 4
  %170 = icmp eq i64 %169, 0
  br i1 %170, label %._crit_edge.i68, label %.lr.ph5.i67

._crit_edge.i68:                                  ; preds = %.lr.ph5.i67
  %.lcssa203 = phi i32 [ %167, %.lr.ph5.i67 ]
  %c.04.i64.lcssa = phi i32 [ %c.04.i64, %.lr.ph5.i67 ]
  %171 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa203
  store i8 0, i8* %171, align 1, !tbaa !5
  %172 = icmp sgt i32 %c.04.i64.lcssa, -1
  br i1 %172, label %.lr.ph.i71.preheader, label %l2h.exit73

.lr.ph.i71.preheader:                             ; preds = %._crit_edge.i68
  br label %.lr.ph.i71

.lr.ph.i71:                                       ; preds = %.lr.ph.i71..lr.ph.i71_crit_edge, %.lr.ph.i71.preheader
  %.in.i69 = phi i32 [ %173, %.lr.ph.i71..lr.ph.i71_crit_edge ], [ %.lcssa203, %.lr.ph.i71.preheader ]
  %.12.i70 = phi i64 [ %179, %.lr.ph.i71..lr.ph.i71_crit_edge ], [ 0, %.lr.ph.i71.preheader ]
  %173 = add nsw i32 %.in.i69, -1
  %174 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 %173
  %175 = load i8* %174, align 1, !tbaa !5
  %176 = trunc i64 %.12.i70 to i32
  %177 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %176
  store i8 %175, i8* %177, align 1, !tbaa !5
  %178 = icmp sgt i32 %173, 0
  br i1 %178, label %.lr.ph.i71..lr.ph.i71_crit_edge, label %l2h.exit73.loopexit

.lr.ph.i71..lr.ph.i71_crit_edge:                  ; preds = %.lr.ph.i71
  %179 = add i64 %.12.i70, 1
  br label %.lr.ph.i71

l2h.exit73.loopexit:                              ; preds = %.lr.ph.i71
  br label %l2h.exit73

l2h.exit73:                                       ; preds = %l2h.exit73.loopexit, %._crit_edge.i68, %152
  %.0.i72 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %152 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge.i68 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %l2h.exit73.loopexit ]
  %180 = load i8* %.0.i72, align 1, !tbaa !5
  %181 = icmp eq i8 %180, 0
  br i1 %181, label %print_uart.exit, label %.lr.ph.i59.preheader

.lr.ph.i59.preheader:                             ; preds = %l2h.exit73
  br label %.lr.ph.i59

.lr.ph.i59:                                       ; preds = %printc_uart.exit.i60, %.lr.ph.i59.preheader
  %182 = phi i8 [ %188, %printc_uart.exit.i60 ], [ %180, %.lr.ph.i59.preheader ]
  %.01.i58 = phi i8* [ %186, %printc_uart.exit.i60 ], [ %.0.i72, %.lr.ph.i59.preheader ]
  br label %183

; <label>:183                                     ; preds = %183, %.lr.ph.i59
  %184 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %185 = icmp ult i32 %184, 65536
  br i1 %185, label %183, label %printc_uart.exit.i60

printc_uart.exit.i60:                             ; preds = %183
  %186 = getelementptr inbounds i8* %.01.i58, i32 1
  %187 = sext i8 %182 to i32
  volatile store i32 %187, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %188 = load i8* %186, align 1, !tbaa !5
  %189 = icmp eq i8 %188, 0
  br i1 %189, label %print_uart.exit.loopexit195, label %.lr.ph.i59

; <label>:190                                     ; preds = %130
  %191 = load i8** %arg, align 4
  %192 = bitcast i8* %191 to i32*
  %193 = getelementptr i8* %191, i32 4
  store i8* %193, i8** %arg, align 4
  %194 = load i32* %192, align 4
  %195 = zext i32 %194 to i64
  %196 = bitcast i8* %193 to i32*
  %197 = getelementptr i8* %191, i32 8
  store i8* %197, i8** %arg, align 4
  %198 = load i32* %196, align 4
  %199 = zext i32 %198 to i64
  %200 = shl nuw i64 %199, 32
  %201 = or i64 %200, %195
  %202 = icmp eq i64 %201, 0
  br i1 %202, label %l2h.exit, label %.lr.ph5.i49.preheader

.lr.ph5.i49.preheader:                            ; preds = %190
  br label %.lr.ph5.i49

.lr.ph5.i49:                                      ; preds = %.lr.ph5.i49, %.lr.ph5.i49.preheader
  %c.04.i47 = phi i32 [ %205, %.lr.ph5.i49 ], [ 0, %.lr.ph5.i49.preheader ]
  %.013.i48 = phi i64 [ %207, %.lr.ph5.i49 ], [ %201, %.lr.ph5.i49.preheader ]
  %.01.tr.i = trunc i64 %.013.i48 to i32
  %203 = and i32 %.01.tr.i, 15
  %204 = icmp ult i32 %203, 10
  %.0.in.v.i55 = select i1 %204, i32 48, i32 55
  %.0.in.i56 = add nuw nsw i32 %.0.in.v.i55, %203
  %.0.i57 = trunc i32 %.0.in.i56 to i8
  %205 = add nsw i32 %c.04.i47, 1
  %206 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 %c.04.i47
  store i8 %.0.i57, i8* %206, align 1, !tbaa !5
  %207 = lshr i64 %.013.i48, 4
  %208 = icmp eq i64 %207, 0
  br i1 %208, label %._crit_edge.i50, label %.lr.ph5.i49

._crit_edge.i50:                                  ; preds = %.lr.ph5.i49
  %.lcssa202 = phi i32 [ %205, %.lr.ph5.i49 ]
  %c.04.i47.lcssa = phi i32 [ %c.04.i47, %.lr.ph5.i49 ]
  %209 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa202
  store i8 0, i8* %209, align 1, !tbaa !5
  %210 = icmp sgt i32 %c.04.i47.lcssa, -1
  br i1 %210, label %.lr.ph.i53.preheader, label %l2h.exit

.lr.ph.i53.preheader:                             ; preds = %._crit_edge.i50
  br label %.lr.ph.i53

.lr.ph.i53:                                       ; preds = %.lr.ph.i53..lr.ph.i53_crit_edge, %.lr.ph.i53.preheader
  %.in.i51 = phi i32 [ %211, %.lr.ph.i53..lr.ph.i53_crit_edge ], [ %.lcssa202, %.lr.ph.i53.preheader ]
  %.12.i52 = phi i64 [ %217, %.lr.ph.i53..lr.ph.i53_crit_edge ], [ 0, %.lr.ph.i53.preheader ]
  %211 = add nsw i32 %.in.i51, -1
  %212 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 %211
  %213 = load i8* %212, align 1, !tbaa !5
  %214 = trunc i64 %.12.i52 to i32
  %215 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %214
  store i8 %213, i8* %215, align 1, !tbaa !5
  %216 = icmp sgt i32 %211, 0
  br i1 %216, label %.lr.ph.i53..lr.ph.i53_crit_edge, label %l2h.exit.loopexit

.lr.ph.i53..lr.ph.i53_crit_edge:                  ; preds = %.lr.ph.i53
  %217 = add i64 %.12.i52, 1
  br label %.lr.ph.i53

l2h.exit.loopexit:                                ; preds = %.lr.ph.i53
  br label %l2h.exit

l2h.exit:                                         ; preds = %l2h.exit.loopexit, %._crit_edge.i50, %190
  %.0.i54 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %190 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge.i50 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %l2h.exit.loopexit ]
  %218 = load i8* %.0.i54, align 1, !tbaa !5
  %219 = icmp eq i8 %218, 0
  br i1 %219, label %print_uart.exit, label %.lr.ph.i42.preheader

.lr.ph.i42.preheader:                             ; preds = %l2h.exit
  br label %.lr.ph.i42

.lr.ph.i42:                                       ; preds = %printc_uart.exit.i43, %.lr.ph.i42.preheader
  %220 = phi i8 [ %226, %printc_uart.exit.i43 ], [ %218, %.lr.ph.i42.preheader ]
  %.01.i41 = phi i8* [ %224, %printc_uart.exit.i43 ], [ %.0.i54, %.lr.ph.i42.preheader ]
  br label %221

; <label>:221                                     ; preds = %221, %.lr.ph.i42
  %222 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %223 = icmp ult i32 %222, 65536
  br i1 %223, label %221, label %printc_uart.exit.i43

printc_uart.exit.i43:                             ; preds = %221
  %224 = getelementptr inbounds i8* %.01.i41, i32 1
  %225 = sext i8 %220 to i32
  volatile store i32 %225, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %226 = load i8* %224, align 1, !tbaa !5
  %227 = icmp eq i8 %226, 0
  br i1 %227, label %print_uart.exit.loopexit196, label %.lr.ph.i42

; <label>:228                                     ; preds = %10
  %229 = load i8** %arg, align 4
  %230 = bitcast i8* %229 to i32*
  %231 = getelementptr i8* %229, i32 4
  store i8* %231, i8** %arg, align 4
  %232 = load i32* %230, align 4
  %233 = add nsw i32 %.k.1, 1
  %234 = getelementptr inbounds i8* %fmt, i32 %233
  %235 = load i8* %234, align 1, !tbaa !5
  %236 = icmp eq i8 %235, 104
  %k.3 = select i1 %236, i32 %233, i32 %.k.1
  %x.0.v = select i1 %236, i32 255, i32 65535
  %x.0 = and i32 %x.0.v, %232
  %237 = add nsw i32 %k.3, 1
  %238 = getelementptr inbounds i8* %fmt, i32 %237
  %239 = load i8* %238, align 1, !tbaa !5
  %240 = sext i8 %239 to i32
  switch i32 %240, label %print_uart.exit [
    i32 100, label %241
    i32 120, label %253
    i32 88, label %278
  ]

; <label>:241                                     ; preds = %228
  %242 = call i8* @itoa(i32 %x.0)
  %243 = load i8* %242, align 1, !tbaa !5
  %244 = icmp eq i8 %243, 0
  br i1 %244, label %print_uart.exit, label %.lr.ph.i32.preheader

.lr.ph.i32.preheader:                             ; preds = %241
  br label %.lr.ph.i32

.lr.ph.i32:                                       ; preds = %printc_uart.exit.i33, %.lr.ph.i32.preheader
  %245 = phi i8 [ %251, %printc_uart.exit.i33 ], [ %243, %.lr.ph.i32.preheader ]
  %.01.i31 = phi i8* [ %249, %printc_uart.exit.i33 ], [ %242, %.lr.ph.i32.preheader ]
  br label %246

; <label>:246                                     ; preds = %246, %.lr.ph.i32
  %247 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %248 = icmp ult i32 %247, 65536
  br i1 %248, label %246, label %printc_uart.exit.i33

printc_uart.exit.i33:                             ; preds = %246
  %249 = getelementptr inbounds i8* %.01.i31, i32 1
  %250 = sext i8 %245 to i32
  volatile store i32 %250, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %251 = load i8* %249, align 1, !tbaa !5
  %252 = icmp eq i8 %251, 0
  br i1 %252, label %print_uart.exit.loopexit197, label %.lr.ph.i32

; <label>:253                                     ; preds = %228
  %254 = icmp eq i32 %x.0, 0
  br i1 %254, label %i2h.exit27, label %.lr.ph5.i20.preheader

.lr.ph5.i20.preheader:                            ; preds = %253
  br label %.lr.ph5.i20

.lr.ph5.i20:                                      ; preds = %.lr.ph5.i20, %.lr.ph5.i20.preheader
  %c.04.i18 = phi i32 [ %257, %.lr.ph5.i20 ], [ 0, %.lr.ph5.i20.preheader ]
  %.013.i19 = phi i32 [ %259, %.lr.ph5.i20 ], [ %x.0, %.lr.ph5.i20.preheader ]
  %255 = and i32 %.013.i19, 15
  %256 = icmp ult i32 %255, 10
  %.0.in.v.i28 = select i1 %256, i32 48, i32 87
  %.0.in.i29 = add nuw nsw i32 %.0.in.v.i28, %255
  %.0.i30 = trunc i32 %.0.in.i29 to i8
  %257 = add nsw i32 %c.04.i18, 1
  %258 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i18
  store i8 %.0.i30, i8* %258, align 1, !tbaa !5
  %259 = lshr i32 %.013.i19, 4
  %260 = icmp eq i32 %259, 0
  br i1 %260, label %._crit_edge.i21, label %.lr.ph5.i20

._crit_edge.i21:                                  ; preds = %.lr.ph5.i20
  %.lcssa201 = phi i32 [ %257, %.lr.ph5.i20 ]
  %c.04.i18.lcssa = phi i32 [ %c.04.i18, %.lr.ph5.i20 ]
  %261 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa201
  store i8 0, i8* %261, align 1, !tbaa !5
  %262 = icmp sgt i32 %c.04.i18.lcssa, -1
  br i1 %262, label %.lr.ph.i25.preheader, label %i2h.exit27

.lr.ph.i25.preheader:                             ; preds = %._crit_edge.i21
  br label %.lr.ph.i25

.lr.ph.i25:                                       ; preds = %.lr.ph.i25, %.lr.ph.i25.preheader
  %.in.i22 = phi i32 [ %263, %.lr.ph.i25 ], [ %.lcssa201, %.lr.ph.i25.preheader ]
  %.12.i23 = phi i32 [ %266, %.lr.ph.i25 ], [ 0, %.lr.ph.i25.preheader ]
  %263 = add nsw i32 %.in.i22, -1
  %264 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %263
  %265 = load i8* %264, align 1, !tbaa !5
  %266 = add i32 %.12.i23, 1
  %267 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i23
  store i8 %265, i8* %267, align 1, !tbaa !5
  %exitcond.i24 = icmp eq i32 %266, %.lcssa201
  br i1 %exitcond.i24, label %i2h.exit27.loopexit, label %.lr.ph.i25

i2h.exit27.loopexit:                              ; preds = %.lr.ph.i25
  br label %i2h.exit27

i2h.exit27:                                       ; preds = %i2h.exit27.loopexit, %._crit_edge.i21, %253
  %.0.i26 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %253 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i21 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit27.loopexit ]
  %268 = load i8* %.0.i26, align 1, !tbaa !5
  %269 = icmp eq i8 %268, 0
  br i1 %269, label %print_uart.exit, label %.lr.ph.i13.preheader

.lr.ph.i13.preheader:                             ; preds = %i2h.exit27
  br label %.lr.ph.i13

.lr.ph.i13:                                       ; preds = %printc_uart.exit.i14, %.lr.ph.i13.preheader
  %270 = phi i8 [ %276, %printc_uart.exit.i14 ], [ %268, %.lr.ph.i13.preheader ]
  %.01.i12 = phi i8* [ %274, %printc_uart.exit.i14 ], [ %.0.i26, %.lr.ph.i13.preheader ]
  br label %271

; <label>:271                                     ; preds = %271, %.lr.ph.i13
  %272 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %273 = icmp ult i32 %272, 65536
  br i1 %273, label %271, label %printc_uart.exit.i14

printc_uart.exit.i14:                             ; preds = %271
  %274 = getelementptr inbounds i8* %.01.i12, i32 1
  %275 = sext i8 %270 to i32
  volatile store i32 %275, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %276 = load i8* %274, align 1, !tbaa !5
  %277 = icmp eq i8 %276, 0
  br i1 %277, label %print_uart.exit.loopexit198, label %.lr.ph.i13

; <label>:278                                     ; preds = %228
  %279 = icmp eq i32 %x.0, 0
  br i1 %279, label %i2h.exit, label %.lr.ph5.i.preheader

.lr.ph5.i.preheader:                              ; preds = %278
  br label %.lr.ph5.i

.lr.ph5.i:                                        ; preds = %.lr.ph5.i, %.lr.ph5.i.preheader
  %c.04.i = phi i32 [ %282, %.lr.ph5.i ], [ 0, %.lr.ph5.i.preheader ]
  %.013.i = phi i32 [ %284, %.lr.ph5.i ], [ %x.0, %.lr.ph5.i.preheader ]
  %280 = and i32 %.013.i, 15
  %281 = icmp ult i32 %280, 10
  %.0.in.v.i = select i1 %281, i32 48, i32 55
  %.0.in.i = add nuw nsw i32 %.0.in.v.i, %280
  %.0.i11 = trunc i32 %.0.in.i to i8
  %282 = add nsw i32 %c.04.i, 1
  %283 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i
  store i8 %.0.i11, i8* %283, align 1, !tbaa !5
  %284 = lshr i32 %.013.i, 4
  %285 = icmp eq i32 %284, 0
  br i1 %285, label %._crit_edge.i, label %.lr.ph5.i

._crit_edge.i:                                    ; preds = %.lr.ph5.i
  %.lcssa200 = phi i32 [ %282, %.lr.ph5.i ]
  %c.04.i.lcssa = phi i32 [ %c.04.i, %.lr.ph5.i ]
  %286 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa200
  store i8 0, i8* %286, align 1, !tbaa !5
  %287 = icmp sgt i32 %c.04.i.lcssa, -1
  br i1 %287, label %.lr.ph.i10.preheader, label %i2h.exit

.lr.ph.i10.preheader:                             ; preds = %._crit_edge.i
  br label %.lr.ph.i10

.lr.ph.i10:                                       ; preds = %.lr.ph.i10, %.lr.ph.i10.preheader
  %.in.i = phi i32 [ %288, %.lr.ph.i10 ], [ %.lcssa200, %.lr.ph.i10.preheader ]
  %.12.i = phi i32 [ %291, %.lr.ph.i10 ], [ 0, %.lr.ph.i10.preheader ]
  %288 = add nsw i32 %.in.i, -1
  %289 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %288
  %290 = load i8* %289, align 1, !tbaa !5
  %291 = add i32 %.12.i, 1
  %292 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i
  store i8 %290, i8* %292, align 1, !tbaa !5
  %exitcond.i = icmp eq i32 %291, %.lcssa200
  br i1 %exitcond.i, label %i2h.exit.loopexit, label %.lr.ph.i10

i2h.exit.loopexit:                                ; preds = %.lr.ph.i10
  br label %i2h.exit

i2h.exit:                                         ; preds = %i2h.exit.loopexit, %._crit_edge.i, %278
  %.0.i = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %278 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit.loopexit ]
  %293 = load i8* %.0.i, align 1, !tbaa !5
  %294 = icmp eq i8 %293, 0
  br i1 %294, label %print_uart.exit, label %.lr.ph.i7.preheader

.lr.ph.i7.preheader:                              ; preds = %i2h.exit
  br label %.lr.ph.i7

.lr.ph.i7:                                        ; preds = %printc_uart.exit.i8, %.lr.ph.i7.preheader
  %295 = phi i8 [ %301, %printc_uart.exit.i8 ], [ %293, %.lr.ph.i7.preheader ]
  %.01.i6 = phi i8* [ %299, %printc_uart.exit.i8 ], [ %.0.i, %.lr.ph.i7.preheader ]
  br label %296

; <label>:296                                     ; preds = %296, %.lr.ph.i7
  %297 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %298 = icmp ult i32 %297, 65536
  br i1 %298, label %296, label %printc_uart.exit.i8

printc_uart.exit.i8:                              ; preds = %296
  %299 = getelementptr inbounds i8* %.01.i6, i32 1
  %300 = sext i8 %295 to i32
  volatile store i32 %300, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %301 = load i8* %299, align 1, !tbaa !5
  %302 = icmp eq i8 %301, 0
  br i1 %302, label %print_uart.exit.loopexit199, label %.lr.ph.i7

.preheader139:                                    ; preds = %.preheader139, %.preheader139.preheader
  %303 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %304 = icmp ult i32 %303, 65536
  br i1 %304, label %.preheader139, label %printc_uart.exit5

printc_uart.exit5:                                ; preds = %.preheader139
  volatile store i32 37, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  br label %print_uart.exit

.preheader128:                                    ; preds = %.preheader128, %.preheader128.preheader
  %305 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %306 = icmp ult i32 %305, 65536
  br i1 %306, label %.preheader128, label %printc_uart.exit4

printc_uart.exit4:                                ; preds = %.preheader128
  volatile store i32 37, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %307 = load i8* %13, align 1, !tbaa !5
  br label %308

; <label>:308                                     ; preds = %308, %printc_uart.exit4
  %309 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %310 = icmp ult i32 %309, 65536
  br i1 %310, label %308, label %printc_uart.exit3

printc_uart.exit3:                                ; preds = %308
  %311 = sext i8 %307 to i32
  volatile store i32 %311, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  br label %print_uart.exit

print_uart.exit.loopexit:                         ; preds = %printc_uart.exit.i
  br label %print_uart.exit

print_uart.exit.loopexit190:                      ; preds = %printc_uart.exit.i38
  br label %print_uart.exit

print_uart.exit.loopexit191:                      ; preds = %printc_uart.exit.i84
  br label %print_uart.exit

print_uart.exit.loopexit192:                      ; preds = %printc_uart.exit.i108
  br label %print_uart.exit

print_uart.exit.loopexit193:                      ; preds = %printc_uart.exit.i89
  br label %print_uart.exit

print_uart.exit.loopexit194:                      ; preds = %printc_uart.exit.i79
  br label %print_uart.exit

print_uart.exit.loopexit195:                      ; preds = %printc_uart.exit.i60
  br label %print_uart.exit

print_uart.exit.loopexit196:                      ; preds = %printc_uart.exit.i43
  br label %print_uart.exit

print_uart.exit.loopexit197:                      ; preds = %printc_uart.exit.i33
  br label %print_uart.exit

print_uart.exit.loopexit198:                      ; preds = %printc_uart.exit.i14
  br label %print_uart.exit

print_uart.exit.loopexit199:                      ; preds = %printc_uart.exit.i8
  br label %print_uart.exit

print_uart.exit:                                  ; preds = %print_uart.exit.loopexit199, %print_uart.exit.loopexit198, %print_uart.exit.loopexit197, %print_uart.exit.loopexit196, %print_uart.exit.loopexit195, %print_uart.exit.loopexit194, %print_uart.exit.loopexit193, %print_uart.exit.loopexit192, %print_uart.exit.loopexit191, %print_uart.exit.loopexit190, %print_uart.exit.loopexit, %printc_uart.exit3, %printc_uart.exit5, %i2h.exit, %i2h.exit27, %241, %228, %l2h.exit, %l2h.exit73, %135, %130, %i2h.exit102, %i2h.exit121, %printc_uart.exit125, %48, %32, %16
  %k.4 = phi i32 [ %.k.1, %printc_uart.exit3 ], [ %.k.1, %printc_uart.exit5 ], [ %237, %228 ], [ %.k.1, %130 ], [ %.k.1, %printc_uart.exit125 ], [ %.k.1, %16 ], [ %.k.1, %32 ], [ %.k.1, %48 ], [ %.k.1, %i2h.exit121 ], [ %.k.1, %i2h.exit102 ], [ %131, %135 ], [ %131, %l2h.exit73 ], [ %131, %l2h.exit ], [ %237, %241 ], [ %237, %i2h.exit27 ], [ %237, %i2h.exit ], [ %.k.1, %print_uart.exit.loopexit ], [ %.k.1, %print_uart.exit.loopexit190 ], [ %.k.1, %print_uart.exit.loopexit191 ], [ %.k.1, %print_uart.exit.loopexit192 ], [ %.k.1, %print_uart.exit.loopexit193 ], [ %131, %print_uart.exit.loopexit194 ], [ %131, %print_uart.exit.loopexit195 ], [ %131, %print_uart.exit.loopexit196 ], [ %237, %print_uart.exit.loopexit197 ], [ %237, %print_uart.exit.loopexit198 ], [ %237, %print_uart.exit.loopexit199 ]
  %312 = add nsw i32 %k.4, 1
  br label %4

; <label>:313                                     ; preds = %4
  %.lcssa212 = phi i8 [ %6, %4 ]
  %.lcssa209 = phi i8* [ %5, %4 ]
  %k.0.lcssa = phi i32 [ %k.0, %4 ]
  %314 = icmp ne i8 %.lcssa212, 10
  %315 = icmp ne i32 %prev_r.0.ph, 0
  %or.cond = or i1 %314, %315
  br i1 %or.cond, label %.thread, label %.preheader.preheader

.preheader.preheader:                             ; preds = %313
  br label %.preheader

.preheader:                                       ; preds = %.preheader, %.preheader.preheader
  %316 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %317 = icmp ult i32 %316, 65536
  br i1 %317, label %.preheader, label %printc_uart.exit2

printc_uart.exit2:                                ; preds = %.preheader
  volatile store i32 13, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %.pre = load i8* %.lcssa209, align 1, !tbaa !5
  br label %.thread

.thread.loopexit:                                 ; preds = %4
  %k.0.lcssa207 = phi i32 [ %k.0, %4 ]
  br label %.thread

.thread:                                          ; preds = %.thread.loopexit, %printc_uart.exit2, %313
  %k.0208 = phi i32 [ %k.0.lcssa, %313 ], [ %k.0.lcssa, %printc_uart.exit2 ], [ %k.0.lcssa207, %.thread.loopexit ]
  %318 = phi i8 [ %.lcssa212, %313 ], [ %.pre, %printc_uart.exit2 ], [ 13, %.thread.loopexit ]
  %prev_r.1127 = phi i32 [ %prev_r.0.ph, %313 ], [ 0, %printc_uart.exit2 ], [ 1, %.thread.loopexit ]
  br label %319

; <label>:319                                     ; preds = %319, %.thread
  %320 = volatile load i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %321 = icmp ult i32 %320, 65536
  br i1 %321, label %319, label %printc_uart.exit

printc_uart.exit:                                 ; preds = %319
  %322 = sext i8 %318 to i32
  volatile store i32 %322, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %323 = add nsw i32 %k.0208, 1
  br label %.outer

; <label>:324                                     ; preds = %4
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
