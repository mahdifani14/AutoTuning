; ModuleID = 'uart.arm.bc'
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
  br label %1

; <label>:1                                       ; preds = %1, %0
  %2 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %3 = icmp ult i32 %2, 65536
  br i1 %3, label %1, label %4

; <label>:4                                       ; preds = %1
  %5 = sext i8 %c to i32
  store volatile i32 %5, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  ret void
}

; Function Attrs: nounwind
define void @print_uart(i8* nocapture readonly %ptr) #0 {
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
  %5 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %6 = icmp ult i32 %5, 65536
  br i1 %6, label %4, label %printc_uart.exit

printc_uart.exit:                                 ; preds = %4
  %7 = getelementptr inbounds i8* %.01, i32 1
  %8 = sext i8 %3 to i32
  store volatile i32 %8, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %9 = load i8* %7, align 1, !tbaa !5
  %10 = icmp eq i8 %9, 0
  br i1 %10, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %printc_uart.exit
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
  %7 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %8 = icmp ult i32 %7, 65536
  br i1 %8, label %.preheader6, label %printc_uart.exit

printc_uart.exit:                                 ; preds = %.preheader6
  store volatile i32 13, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %.pre = load i8* %2, align 1, !tbaa !5
  br label %.thread

.thread:                                          ; preds = %printc_uart.exit, %4, %1
  %9 = phi i8 [ %3, %4 ], [ %.pre, %printc_uart.exit ], [ 13, %1 ]
  %prev_r.15 = phi i32 [ %prev_r.0, %4 ], [ 0, %printc_uart.exit ], [ 1, %1 ]
  br label %10

; <label>:10                                      ; preds = %10, %.thread
  %11 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %12 = icmp ult i32 %11, 65536
  br i1 %12, label %10, label %printc_uart.exit3

printc_uart.exit3:                                ; preds = %10
  %13 = sext i8 %9 to i32
  store volatile i32 %13, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %14 = add nsw i32 %k.0, 1
  br label %1

.preheader:                                       ; preds = %.preheader, %.preheader.preheader
  %15 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %16 = icmp ult i32 %15, 65536
  br i1 %16, label %.preheader, label %printc_uart.exit2

printc_uart.exit2:                                ; preds = %.preheader
  store volatile i32 10, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  ret i32 0
}

; Function Attrs: nounwind
define i32 @printf(i8* nocapture readonly %fmt, ...) #0 {
  %thex.i46 = alloca [17 x i8], align 1
  %thex.i = alloca [9 x i8], align 1
  %arg = alloca i8*, align 4
  %1 = bitcast i8** %arg to i8*
  call void @llvm.va_start(i8* %1)
  %2 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 0
  %3 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 0
  br label %.outer

.outer:                                           ; preds = %printc_uart.exit, %0
  %k.0.ph = phi i32 [ %354, %printc_uart.exit ], [ 0, %0 ]
  %prev_r.0.ph = phi i32 [ %prev_r.1132, %printc_uart.exit ], [ 0, %0 ]
  br label %4

; <label>:4                                       ; preds = %print_uart.exit, %.outer
  %k.0 = phi i32 [ %343, %print_uart.exit ], [ %k.0.ph, %.outer ]
  %5 = getelementptr inbounds i8* %fmt, i32 %k.0
  %6 = load i8* %5, align 1, !tbaa !5
  switch i8 %6, label %344 [
    i8 0, label %355
    i8 37, label %.preheader145.preheader
    i8 13, label %.thread.loopexit
  ]

.preheader145.preheader:                          ; preds = %4
  br label %.preheader145

.preheader145:                                    ; preds = %.preheader145, %.preheader145.preheader
  %k.1.in = phi i32 [ %k.1, %.preheader145 ], [ %k.0, %.preheader145.preheader ]
  %k.1 = add nsw i32 %k.1.in, 1
  %7 = getelementptr inbounds i8* %fmt, i32 %k.1
  %8 = load i8* %7, align 1, !tbaa !5
  %.off = add i8 %8, -48
  %9 = icmp ult i8 %.off, 10
  br i1 %9, label %.preheader145, label %10

; <label>:10                                      ; preds = %.preheader145
  %.lcssa = phi i8 [ %8, %.preheader145 ]
  %k.1.lcssa = phi i32 [ %k.1, %.preheader145 ]
  %k.1.in.lcssa = phi i32 [ %k.1.in, %.preheader145 ]
  %11 = icmp eq i8 %.lcssa, 108
  %12 = add nsw i32 %k.1.in.lcssa, 2
  %.k.1 = select i1 %11, i32 %12, i32 %k.1.lcssa
  %13 = getelementptr inbounds i8* %fmt, i32 %.k.1
  %14 = load i8* %13, align 1, !tbaa !5
  %15 = sext i8 %14 to i32
  switch i32 %15, label %.preheader133.preheader [
    i32 100, label %16
    i32 117, label %32
    i32 115, label %48
    i32 99, label %63
    i32 120, label %72
    i32 88, label %101
    i32 108, label %130
    i32 104, label %259
    i32 37, label %.preheader144.preheader
  ]

.preheader144.preheader:                          ; preds = %10
  br label %.preheader144

.preheader133.preheader:                          ; preds = %10
  br label %.preheader133

; <label>:16                                      ; preds = %10
  %17 = load i8** %arg, align 4
  %18 = bitcast i8* %17 to i32*
  %19 = getelementptr i8* %17, i32 4
  store i8* %19, i8** %arg, align 4
  %20 = load i32* %18, align 4
  %21 = call i8* @itoa(i32 %20) #5
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
  %26 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %27 = icmp ult i32 %26, 65536
  br i1 %27, label %25, label %printc_uart.exit.i

printc_uart.exit.i:                               ; preds = %25
  %28 = getelementptr inbounds i8* %.01.i, i32 1
  %29 = sext i8 %24 to i32
  store volatile i32 %29, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %30 = load i8* %28, align 1, !tbaa !5
  %31 = icmp eq i8 %30, 0
  br i1 %31, label %print_uart.exit.loopexit, label %.lr.ph.i

; <label>:32                                      ; preds = %10
  %33 = load i8** %arg, align 4
  %34 = bitcast i8* %33 to i32*
  %35 = getelementptr i8* %33, i32 4
  store i8* %35, i8** %arg, align 4
  %36 = load i32* %34, align 4
  %37 = call i8* @utoa(i32 %36) #5
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
  %42 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %43 = icmp ult i32 %42, 65536
  br i1 %43, label %41, label %printc_uart.exit.i38

printc_uart.exit.i38:                             ; preds = %41
  %44 = getelementptr inbounds i8* %.01.i36, i32 1
  %45 = sext i8 %40 to i32
  store volatile i32 %45, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %46 = load i8* %44, align 1, !tbaa !5
  %47 = icmp eq i8 %46, 0
  br i1 %47, label %print_uart.exit.loopexit195, label %.lr.ph.i37

; <label>:48                                      ; preds = %10
  %49 = load i8** %arg, align 4
  %50 = bitcast i8* %49 to i8**
  %51 = getelementptr i8* %49, i32 4
  store i8* %51, i8** %arg, align 4
  %52 = load i8** %50, align 4
  %53 = load i8* %52, align 1, !tbaa !5
  %54 = icmp eq i8 %53, 0
  br i1 %54, label %print_uart.exit, label %.lr.ph.i127.preheader

.lr.ph.i127.preheader:                            ; preds = %48
  br label %.lr.ph.i127

.lr.ph.i127:                                      ; preds = %printc_uart.exit.i128, %.lr.ph.i127.preheader
  %55 = phi i8 [ %61, %printc_uart.exit.i128 ], [ %53, %.lr.ph.i127.preheader ]
  %.01.i126 = phi i8* [ %59, %printc_uart.exit.i128 ], [ %52, %.lr.ph.i127.preheader ]
  br label %56

; <label>:56                                      ; preds = %56, %.lr.ph.i127
  %57 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %58 = icmp ult i32 %57, 65536
  br i1 %58, label %56, label %printc_uart.exit.i128

printc_uart.exit.i128:                            ; preds = %56
  %59 = getelementptr inbounds i8* %.01.i126, i32 1
  %60 = sext i8 %55 to i32
  store volatile i32 %60, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %61 = load i8* %59, align 1, !tbaa !5
  %62 = icmp eq i8 %61, 0
  br i1 %62, label %print_uart.exit.loopexit196, label %.lr.ph.i127

; <label>:63                                      ; preds = %10
  %64 = load i8** %arg, align 4
  %65 = bitcast i8* %64 to i32*
  %66 = getelementptr i8* %64, i32 4
  store i8* %66, i8** %arg, align 4
  %67 = load i32* %65, align 4
  br label %68

; <label>:68                                      ; preds = %68, %63
  %69 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %70 = icmp ult i32 %69, 65536
  br i1 %70, label %68, label %printc_uart.exit125

printc_uart.exit125:                              ; preds = %68
  %sext = shl i32 %67, 24
  %71 = ashr exact i32 %sext, 24
  store volatile i32 %71, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
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
  %.lcssa210 = phi i32 [ %80, %.lr.ph5.i114 ]
  %c.04.i112.lcssa = phi i32 [ %c.04.i112, %.lr.ph5.i114 ]
  %84 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa210
  store i8 0, i8* %84, align 1, !tbaa !5
  %85 = icmp sgt i32 %c.04.i112.lcssa, -1
  br i1 %85, label %.lr.ph.i119.preheader, label %i2h.exit121

.lr.ph.i119.preheader:                            ; preds = %._crit_edge.i115
  br label %.lr.ph.i119

.lr.ph.i119:                                      ; preds = %.lr.ph.i119, %.lr.ph.i119.preheader
  %.in.i116 = phi i32 [ %86, %.lr.ph.i119 ], [ %.lcssa210, %.lr.ph.i119.preheader ]
  %.12.i117 = phi i32 [ %89, %.lr.ph.i119 ], [ 0, %.lr.ph.i119.preheader ]
  %86 = add nsw i32 %.in.i116, -1
  %87 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %86
  %88 = load i8* %87, align 1, !tbaa !5
  %89 = add i32 %.12.i117, 1
  %90 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i117
  store i8 %88, i8* %90, align 1, !tbaa !5
  %exitcond.i118 = icmp eq i32 %89, %.lcssa210
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
  %95 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %96 = icmp ult i32 %95, 65536
  br i1 %96, label %94, label %printc_uart.exit.i108

printc_uart.exit.i108:                            ; preds = %94
  %97 = getelementptr inbounds i8* %.01.i106, i32 1
  %98 = sext i8 %93 to i32
  store volatile i32 %98, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %99 = load i8* %97, align 1, !tbaa !5
  %100 = icmp eq i8 %99, 0
  br i1 %100, label %print_uart.exit.loopexit197, label %.lr.ph.i107

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
  %.lcssa209 = phi i32 [ %109, %.lr.ph5.i95 ]
  %c.04.i93.lcssa = phi i32 [ %c.04.i93, %.lr.ph5.i95 ]
  %113 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa209
  store i8 0, i8* %113, align 1, !tbaa !5
  %114 = icmp sgt i32 %c.04.i93.lcssa, -1
  br i1 %114, label %.lr.ph.i100.preheader, label %i2h.exit102

.lr.ph.i100.preheader:                            ; preds = %._crit_edge.i96
  br label %.lr.ph.i100

.lr.ph.i100:                                      ; preds = %.lr.ph.i100, %.lr.ph.i100.preheader
  %.in.i97 = phi i32 [ %115, %.lr.ph.i100 ], [ %.lcssa209, %.lr.ph.i100.preheader ]
  %.12.i98 = phi i32 [ %118, %.lr.ph.i100 ], [ 0, %.lr.ph.i100.preheader ]
  %115 = add nsw i32 %.in.i97, -1
  %116 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %115
  %117 = load i8* %116, align 1, !tbaa !5
  %118 = add i32 %.12.i98, 1
  %119 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i98
  store i8 %117, i8* %119, align 1, !tbaa !5
  %exitcond.i99 = icmp eq i32 %118, %.lcssa209
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
  %124 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %125 = icmp ult i32 %124, 65536
  br i1 %125, label %123, label %printc_uart.exit.i89

printc_uart.exit.i89:                             ; preds = %123
  %126 = getelementptr inbounds i8* %.01.i87, i32 1
  %127 = sext i8 %122 to i32
  store volatile i32 %127, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %128 = load i8* %126, align 1, !tbaa !5
  %129 = icmp eq i8 %128, 0
  br i1 %129, label %print_uart.exit.loopexit198, label %.lr.ph.i88

; <label>:130                                     ; preds = %10
  %131 = add nsw i32 %.k.1, 1
  %132 = getelementptr inbounds i8* %fmt, i32 %131
  %133 = load i8* %132, align 1, !tbaa !5
  %134 = sext i8 %133 to i32
  switch i32 %134, label %print_uart.exit [
    i32 100, label %135
    i32 120, label %183
    i32 88, label %221
  ]

; <label>:135                                     ; preds = %130
  %136 = load i8** %arg, align 4
  %137 = bitcast i8* %136 to i64*
  %138 = getelementptr i8* %136, i32 8
  store i8* %138, i8** %arg, align 4
  %139 = load i64* %137, align 4
  %140 = icmp slt i64 %139, 0
  br i1 %140, label %141, label %143

; <label>:141                                     ; preds = %135
  %142 = sub i64 0, %139
  br label %145

; <label>:143                                     ; preds = %135
  %144 = icmp eq i64 %139, 0
  br i1 %144, label %ltoa.exit, label %145

; <label>:145                                     ; preds = %143, %141
  %.0.i82 = phi i64 [ %142, %141 ], [ %139, %143 ]
  %neg.0.i = phi i32 [ 1, %141 ], [ 0, %143 ]
  store i8 0, i8* getelementptr inbounds ([25 x i8]* @ltoa.buf, i32 0, i32 24), align 1, !tbaa !5
  br label %146

; <label>:146                                     ; preds = %146, %145
  %i.06.i = phi i32 [ 23, %145 ], [ %152, %146 ]
  %.15.i = phi i64 [ %.0.i82, %145 ], [ %151, %146 ]
  %147 = srem i64 %.15.i, 10
  %148 = add nsw i64 %147, 48
  %149 = trunc i64 %148 to i8
  %150 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %i.06.i
  store i8 %149, i8* %150, align 1, !tbaa !5
  %151 = sdiv i64 %.15.i, 10
  %152 = add nsw i32 %i.06.i, -1
  %153 = icmp sgt i32 %i.06.i, 0
  br i1 %153, label %146, label %.preheader2.i.preheader

.preheader2.i.preheader:                          ; preds = %146
  br label %.preheader2.i

; <label>:154                                     ; preds = %.preheader2.i
  %155 = icmp slt i32 %159, 24
  br i1 %155, label %.preheader2.i, label %160

.preheader2.i:                                    ; preds = %154, %.preheader2.i.preheader
  %i.14.i = phi i32 [ %159, %154 ], [ 0, %.preheader2.i.preheader ]
  %156 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %i.14.i
  %157 = load i8* %156, align 1, !tbaa !5
  %158 = icmp eq i8 %157, 48
  %159 = add nsw i32 %i.14.i, 1
  br i1 %158, label %154, label %160

; <label>:160                                     ; preds = %.preheader2.i, %154
  %i.1.lcssa.i = phi i32 [ %i.14.i, %.preheader2.i ], [ %159, %154 ]
  %161 = icmp eq i32 %neg.0.i, 0
  br i1 %161, label %.preheader.i, label %162

; <label>:162                                     ; preds = %160
  store i8 45, i8* getelementptr inbounds ([25 x i8]* @ltoa.out, i32 0, i32 0), align 1, !tbaa !5
  br label %.preheader.i

.preheader.i:                                     ; preds = %162, %160
  %163 = sub i32 24, %i.1.lcssa.i
  %164 = icmp sgt i32 %163, 0
  br i1 %164, label %.lr.ph.i84.preheader, label %._crit_edge.i85

.lr.ph.i84.preheader:                             ; preds = %.preheader.i
  br label %.lr.ph.i84

.lr.ph.i84:                                       ; preds = %.lr.ph.i84, %.lr.ph.i84.preheader
  %j.03.i = phi i32 [ %170, %.lr.ph.i84 ], [ 0, %.lr.ph.i84.preheader ]
  %165 = add nsw i32 %j.03.i, %i.1.lcssa.i
  %166 = getelementptr inbounds [25 x i8]* @ltoa.buf, i32 0, i32 %165
  %167 = load i8* %166, align 1, !tbaa !5
  %168 = add nsw i32 %j.03.i, %neg.0.i
  %169 = getelementptr inbounds [25 x i8]* @ltoa.out, i32 0, i32 %168
  store i8 %167, i8* %169, align 1, !tbaa !5
  %170 = add nsw i32 %j.03.i, 1
  %exitcond.i83 = icmp eq i32 %170, %163
  br i1 %exitcond.i83, label %._crit_edge.i85.loopexit, label %.lr.ph.i84

._crit_edge.i85.loopexit:                         ; preds = %.lr.ph.i84
  br label %._crit_edge.i85

._crit_edge.i85:                                  ; preds = %._crit_edge.i85.loopexit, %.preheader.i
  %j.0.lcssa.i = phi i32 [ 0, %.preheader.i ], [ %163, %._crit_edge.i85.loopexit ]
  %171 = add nsw i32 %j.0.lcssa.i, %neg.0.i
  %172 = getelementptr inbounds [25 x i8]* @ltoa.out, i32 0, i32 %171
  store i8 0, i8* %172, align 1, !tbaa !5
  br label %ltoa.exit

ltoa.exit:                                        ; preds = %._crit_edge.i85, %143
  %.01.i86 = phi i8* [ getelementptr inbounds ([25 x i8]* @ltoa.out, i32 0, i32 0), %._crit_edge.i85 ], [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %143 ]
  %173 = load i8* %.01.i86, align 1, !tbaa !5
  %174 = icmp eq i8 %173, 0
  br i1 %174, label %print_uart.exit, label %.lr.ph.i78.preheader

.lr.ph.i78.preheader:                             ; preds = %ltoa.exit
  br label %.lr.ph.i78

.lr.ph.i78:                                       ; preds = %printc_uart.exit.i79, %.lr.ph.i78.preheader
  %175 = phi i8 [ %181, %printc_uart.exit.i79 ], [ %173, %.lr.ph.i78.preheader ]
  %.01.i77 = phi i8* [ %179, %printc_uart.exit.i79 ], [ %.01.i86, %.lr.ph.i78.preheader ]
  br label %176

; <label>:176                                     ; preds = %176, %.lr.ph.i78
  %177 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %178 = icmp ult i32 %177, 65536
  br i1 %178, label %176, label %printc_uart.exit.i79

printc_uart.exit.i79:                             ; preds = %176
  %179 = getelementptr inbounds i8* %.01.i77, i32 1
  %180 = sext i8 %175 to i32
  store volatile i32 %180, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %181 = load i8* %179, align 1, !tbaa !5
  %182 = icmp eq i8 %181, 0
  br i1 %182, label %print_uart.exit.loopexit199, label %.lr.ph.i78

; <label>:183                                     ; preds = %130
  %184 = load i8** %arg, align 4
  %185 = bitcast i8* %184 to i32*
  %186 = getelementptr i8* %184, i32 4
  store i8* %186, i8** %arg, align 4
  %187 = load i32* %185, align 4
  %188 = zext i32 %187 to i64
  %189 = bitcast i8* %186 to i32*
  %190 = getelementptr i8* %184, i32 8
  store i8* %190, i8** %arg, align 4
  %191 = load i32* %189, align 4
  %192 = zext i32 %191 to i64
  %193 = shl nuw i64 %192, 32
  %194 = or i64 %193, %188
  %195 = icmp eq i64 %194, 0
  br i1 %195, label %l2h.exit73, label %.lr.ph5.i67.preheader

.lr.ph5.i67.preheader:                            ; preds = %183
  br label %.lr.ph5.i67

.lr.ph5.i67:                                      ; preds = %.lr.ph5.i67, %.lr.ph5.i67.preheader
  %c.04.i64 = phi i32 [ %198, %.lr.ph5.i67 ], [ 0, %.lr.ph5.i67.preheader ]
  %.013.i65 = phi i64 [ %200, %.lr.ph5.i67 ], [ %194, %.lr.ph5.i67.preheader ]
  %.01.tr.i66 = trunc i64 %.013.i65 to i32
  %196 = and i32 %.01.tr.i66, 15
  %197 = icmp ult i32 %196, 10
  %.0.in.v.i74 = select i1 %197, i32 48, i32 87
  %.0.in.i75 = add nuw nsw i32 %.0.in.v.i74, %196
  %.0.i76 = trunc i32 %.0.in.i75 to i8
  %198 = add nsw i32 %c.04.i64, 1
  %199 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 %c.04.i64
  store i8 %.0.i76, i8* %199, align 1, !tbaa !5
  %200 = lshr i64 %.013.i65, 4
  %201 = icmp eq i64 %200, 0
  br i1 %201, label %._crit_edge.i68, label %.lr.ph5.i67

._crit_edge.i68:                                  ; preds = %.lr.ph5.i67
  %.lcssa208 = phi i32 [ %198, %.lr.ph5.i67 ]
  %c.04.i64.lcssa = phi i32 [ %c.04.i64, %.lr.ph5.i67 ]
  %202 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa208
  store i8 0, i8* %202, align 1, !tbaa !5
  %203 = icmp sgt i32 %c.04.i64.lcssa, -1
  br i1 %203, label %.lr.ph.i71.preheader, label %l2h.exit73

.lr.ph.i71.preheader:                             ; preds = %._crit_edge.i68
  br label %.lr.ph.i71

.lr.ph.i71:                                       ; preds = %.lr.ph.i71..lr.ph.i71_crit_edge, %.lr.ph.i71.preheader
  %.in.i69 = phi i32 [ %204, %.lr.ph.i71..lr.ph.i71_crit_edge ], [ %.lcssa208, %.lr.ph.i71.preheader ]
  %.12.i70 = phi i64 [ %210, %.lr.ph.i71..lr.ph.i71_crit_edge ], [ 0, %.lr.ph.i71.preheader ]
  %204 = add nsw i32 %.in.i69, -1
  %205 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 %204
  %206 = load i8* %205, align 1, !tbaa !5
  %207 = trunc i64 %.12.i70 to i32
  %208 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %207
  store i8 %206, i8* %208, align 1, !tbaa !5
  %209 = icmp sgt i32 %204, 0
  br i1 %209, label %.lr.ph.i71..lr.ph.i71_crit_edge, label %l2h.exit73.loopexit

.lr.ph.i71..lr.ph.i71_crit_edge:                  ; preds = %.lr.ph.i71
  %210 = add i64 %.12.i70, 1
  br label %.lr.ph.i71

l2h.exit73.loopexit:                              ; preds = %.lr.ph.i71
  br label %l2h.exit73

l2h.exit73:                                       ; preds = %l2h.exit73.loopexit, %._crit_edge.i68, %183
  %.0.i72 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %183 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge.i68 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %l2h.exit73.loopexit ]
  %211 = load i8* %.0.i72, align 1, !tbaa !5
  %212 = icmp eq i8 %211, 0
  br i1 %212, label %print_uart.exit, label %.lr.ph.i59.preheader

.lr.ph.i59.preheader:                             ; preds = %l2h.exit73
  br label %.lr.ph.i59

.lr.ph.i59:                                       ; preds = %printc_uart.exit.i60, %.lr.ph.i59.preheader
  %213 = phi i8 [ %219, %printc_uart.exit.i60 ], [ %211, %.lr.ph.i59.preheader ]
  %.01.i58 = phi i8* [ %217, %printc_uart.exit.i60 ], [ %.0.i72, %.lr.ph.i59.preheader ]
  br label %214

; <label>:214                                     ; preds = %214, %.lr.ph.i59
  %215 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %216 = icmp ult i32 %215, 65536
  br i1 %216, label %214, label %printc_uart.exit.i60

printc_uart.exit.i60:                             ; preds = %214
  %217 = getelementptr inbounds i8* %.01.i58, i32 1
  %218 = sext i8 %213 to i32
  store volatile i32 %218, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %219 = load i8* %217, align 1, !tbaa !5
  %220 = icmp eq i8 %219, 0
  br i1 %220, label %print_uart.exit.loopexit200, label %.lr.ph.i59

; <label>:221                                     ; preds = %130
  %222 = load i8** %arg, align 4
  %223 = bitcast i8* %222 to i32*
  %224 = getelementptr i8* %222, i32 4
  store i8* %224, i8** %arg, align 4
  %225 = load i32* %223, align 4
  %226 = zext i32 %225 to i64
  %227 = bitcast i8* %224 to i32*
  %228 = getelementptr i8* %222, i32 8
  store i8* %228, i8** %arg, align 4
  %229 = load i32* %227, align 4
  %230 = zext i32 %229 to i64
  %231 = shl nuw i64 %230, 32
  %232 = or i64 %231, %226
  %233 = icmp eq i64 %232, 0
  br i1 %233, label %l2h.exit, label %.lr.ph5.i49.preheader

.lr.ph5.i49.preheader:                            ; preds = %221
  br label %.lr.ph5.i49

.lr.ph5.i49:                                      ; preds = %.lr.ph5.i49, %.lr.ph5.i49.preheader
  %c.04.i47 = phi i32 [ %236, %.lr.ph5.i49 ], [ 0, %.lr.ph5.i49.preheader ]
  %.013.i48 = phi i64 [ %238, %.lr.ph5.i49 ], [ %232, %.lr.ph5.i49.preheader ]
  %.01.tr.i = trunc i64 %.013.i48 to i32
  %234 = and i32 %.01.tr.i, 15
  %235 = icmp ult i32 %234, 10
  %.0.in.v.i55 = select i1 %235, i32 48, i32 55
  %.0.in.i56 = add nuw nsw i32 %.0.in.v.i55, %234
  %.0.i57 = trunc i32 %.0.in.i56 to i8
  %236 = add nsw i32 %c.04.i47, 1
  %237 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 %c.04.i47
  store i8 %.0.i57, i8* %237, align 1, !tbaa !5
  %238 = lshr i64 %.013.i48, 4
  %239 = icmp eq i64 %238, 0
  br i1 %239, label %._crit_edge.i50, label %.lr.ph5.i49

._crit_edge.i50:                                  ; preds = %.lr.ph5.i49
  %.lcssa207 = phi i32 [ %236, %.lr.ph5.i49 ]
  %c.04.i47.lcssa = phi i32 [ %c.04.i47, %.lr.ph5.i49 ]
  %240 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %.lcssa207
  store i8 0, i8* %240, align 1, !tbaa !5
  %241 = icmp sgt i32 %c.04.i47.lcssa, -1
  br i1 %241, label %.lr.ph.i53.preheader, label %l2h.exit

.lr.ph.i53.preheader:                             ; preds = %._crit_edge.i50
  br label %.lr.ph.i53

.lr.ph.i53:                                       ; preds = %.lr.ph.i53..lr.ph.i53_crit_edge, %.lr.ph.i53.preheader
  %.in.i51 = phi i32 [ %242, %.lr.ph.i53..lr.ph.i53_crit_edge ], [ %.lcssa207, %.lr.ph.i53.preheader ]
  %.12.i52 = phi i64 [ %248, %.lr.ph.i53..lr.ph.i53_crit_edge ], [ 0, %.lr.ph.i53.preheader ]
  %242 = add nsw i32 %.in.i51, -1
  %243 = getelementptr inbounds [17 x i8]* %thex.i46, i32 0, i32 %242
  %244 = load i8* %243, align 1, !tbaa !5
  %245 = trunc i64 %.12.i52 to i32
  %246 = getelementptr inbounds [17 x i8]* @l2h.hex, i32 0, i32 %245
  store i8 %244, i8* %246, align 1, !tbaa !5
  %247 = icmp sgt i32 %242, 0
  br i1 %247, label %.lr.ph.i53..lr.ph.i53_crit_edge, label %l2h.exit.loopexit

.lr.ph.i53..lr.ph.i53_crit_edge:                  ; preds = %.lr.ph.i53
  %248 = add i64 %.12.i52, 1
  br label %.lr.ph.i53

l2h.exit.loopexit:                                ; preds = %.lr.ph.i53
  br label %l2h.exit

l2h.exit:                                         ; preds = %l2h.exit.loopexit, %._crit_edge.i50, %221
  %.0.i54 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %221 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %._crit_edge.i50 ], [ getelementptr inbounds ([17 x i8]* @l2h.hex, i32 0, i32 0), %l2h.exit.loopexit ]
  %249 = load i8* %.0.i54, align 1, !tbaa !5
  %250 = icmp eq i8 %249, 0
  br i1 %250, label %print_uart.exit, label %.lr.ph.i42.preheader

.lr.ph.i42.preheader:                             ; preds = %l2h.exit
  br label %.lr.ph.i42

.lr.ph.i42:                                       ; preds = %printc_uart.exit.i43, %.lr.ph.i42.preheader
  %251 = phi i8 [ %257, %printc_uart.exit.i43 ], [ %249, %.lr.ph.i42.preheader ]
  %.01.i41 = phi i8* [ %255, %printc_uart.exit.i43 ], [ %.0.i54, %.lr.ph.i42.preheader ]
  br label %252

; <label>:252                                     ; preds = %252, %.lr.ph.i42
  %253 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %254 = icmp ult i32 %253, 65536
  br i1 %254, label %252, label %printc_uart.exit.i43

printc_uart.exit.i43:                             ; preds = %252
  %255 = getelementptr inbounds i8* %.01.i41, i32 1
  %256 = sext i8 %251 to i32
  store volatile i32 %256, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %257 = load i8* %255, align 1, !tbaa !5
  %258 = icmp eq i8 %257, 0
  br i1 %258, label %print_uart.exit.loopexit201, label %.lr.ph.i42

; <label>:259                                     ; preds = %10
  %260 = load i8** %arg, align 4
  %261 = bitcast i8* %260 to i32*
  %262 = getelementptr i8* %260, i32 4
  store i8* %262, i8** %arg, align 4
  %263 = load i32* %261, align 4
  %264 = add nsw i32 %.k.1, 1
  %265 = getelementptr inbounds i8* %fmt, i32 %264
  %266 = load i8* %265, align 1, !tbaa !5
  %267 = icmp eq i8 %266, 104
  %k.3 = select i1 %267, i32 %264, i32 %.k.1
  %x.0.v = select i1 %267, i32 255, i32 65535
  %x.0 = and i32 %x.0.v, %263
  %268 = add nsw i32 %k.3, 1
  %269 = getelementptr inbounds i8* %fmt, i32 %268
  %270 = load i8* %269, align 1, !tbaa !5
  %271 = sext i8 %270 to i32
  switch i32 %271, label %print_uart.exit [
    i32 100, label %272
    i32 120, label %284
    i32 88, label %309
  ]

; <label>:272                                     ; preds = %259
  %273 = call i8* @itoa(i32 %x.0) #5
  %274 = load i8* %273, align 1, !tbaa !5
  %275 = icmp eq i8 %274, 0
  br i1 %275, label %print_uart.exit, label %.lr.ph.i32.preheader

.lr.ph.i32.preheader:                             ; preds = %272
  br label %.lr.ph.i32

.lr.ph.i32:                                       ; preds = %printc_uart.exit.i33, %.lr.ph.i32.preheader
  %276 = phi i8 [ %282, %printc_uart.exit.i33 ], [ %274, %.lr.ph.i32.preheader ]
  %.01.i31 = phi i8* [ %280, %printc_uart.exit.i33 ], [ %273, %.lr.ph.i32.preheader ]
  br label %277

; <label>:277                                     ; preds = %277, %.lr.ph.i32
  %278 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %279 = icmp ult i32 %278, 65536
  br i1 %279, label %277, label %printc_uart.exit.i33

printc_uart.exit.i33:                             ; preds = %277
  %280 = getelementptr inbounds i8* %.01.i31, i32 1
  %281 = sext i8 %276 to i32
  store volatile i32 %281, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %282 = load i8* %280, align 1, !tbaa !5
  %283 = icmp eq i8 %282, 0
  br i1 %283, label %print_uart.exit.loopexit202, label %.lr.ph.i32

; <label>:284                                     ; preds = %259
  %285 = icmp eq i32 %x.0, 0
  br i1 %285, label %i2h.exit27, label %.lr.ph5.i20.preheader

.lr.ph5.i20.preheader:                            ; preds = %284
  br label %.lr.ph5.i20

.lr.ph5.i20:                                      ; preds = %.lr.ph5.i20, %.lr.ph5.i20.preheader
  %c.04.i18 = phi i32 [ %288, %.lr.ph5.i20 ], [ 0, %.lr.ph5.i20.preheader ]
  %.013.i19 = phi i32 [ %290, %.lr.ph5.i20 ], [ %x.0, %.lr.ph5.i20.preheader ]
  %286 = and i32 %.013.i19, 15
  %287 = icmp ult i32 %286, 10
  %.0.in.v.i28 = select i1 %287, i32 48, i32 87
  %.0.in.i29 = add nuw nsw i32 %.0.in.v.i28, %286
  %.0.i30 = trunc i32 %.0.in.i29 to i8
  %288 = add nsw i32 %c.04.i18, 1
  %289 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i18
  store i8 %.0.i30, i8* %289, align 1, !tbaa !5
  %290 = lshr i32 %.013.i19, 4
  %291 = icmp eq i32 %290, 0
  br i1 %291, label %._crit_edge.i21, label %.lr.ph5.i20

._crit_edge.i21:                                  ; preds = %.lr.ph5.i20
  %.lcssa206 = phi i32 [ %288, %.lr.ph5.i20 ]
  %c.04.i18.lcssa = phi i32 [ %c.04.i18, %.lr.ph5.i20 ]
  %292 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa206
  store i8 0, i8* %292, align 1, !tbaa !5
  %293 = icmp sgt i32 %c.04.i18.lcssa, -1
  br i1 %293, label %.lr.ph.i25.preheader, label %i2h.exit27

.lr.ph.i25.preheader:                             ; preds = %._crit_edge.i21
  br label %.lr.ph.i25

.lr.ph.i25:                                       ; preds = %.lr.ph.i25, %.lr.ph.i25.preheader
  %.in.i22 = phi i32 [ %294, %.lr.ph.i25 ], [ %.lcssa206, %.lr.ph.i25.preheader ]
  %.12.i23 = phi i32 [ %297, %.lr.ph.i25 ], [ 0, %.lr.ph.i25.preheader ]
  %294 = add nsw i32 %.in.i22, -1
  %295 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %294
  %296 = load i8* %295, align 1, !tbaa !5
  %297 = add i32 %.12.i23, 1
  %298 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i23
  store i8 %296, i8* %298, align 1, !tbaa !5
  %exitcond.i24 = icmp eq i32 %297, %.lcssa206
  br i1 %exitcond.i24, label %i2h.exit27.loopexit, label %.lr.ph.i25

i2h.exit27.loopexit:                              ; preds = %.lr.ph.i25
  br label %i2h.exit27

i2h.exit27:                                       ; preds = %i2h.exit27.loopexit, %._crit_edge.i21, %284
  %.0.i26 = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %284 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i21 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit27.loopexit ]
  %299 = load i8* %.0.i26, align 1, !tbaa !5
  %300 = icmp eq i8 %299, 0
  br i1 %300, label %print_uart.exit, label %.lr.ph.i13.preheader

.lr.ph.i13.preheader:                             ; preds = %i2h.exit27
  br label %.lr.ph.i13

.lr.ph.i13:                                       ; preds = %printc_uart.exit.i14, %.lr.ph.i13.preheader
  %301 = phi i8 [ %307, %printc_uart.exit.i14 ], [ %299, %.lr.ph.i13.preheader ]
  %.01.i12 = phi i8* [ %305, %printc_uart.exit.i14 ], [ %.0.i26, %.lr.ph.i13.preheader ]
  br label %302

; <label>:302                                     ; preds = %302, %.lr.ph.i13
  %303 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %304 = icmp ult i32 %303, 65536
  br i1 %304, label %302, label %printc_uart.exit.i14

printc_uart.exit.i14:                             ; preds = %302
  %305 = getelementptr inbounds i8* %.01.i12, i32 1
  %306 = sext i8 %301 to i32
  store volatile i32 %306, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %307 = load i8* %305, align 1, !tbaa !5
  %308 = icmp eq i8 %307, 0
  br i1 %308, label %print_uart.exit.loopexit203, label %.lr.ph.i13

; <label>:309                                     ; preds = %259
  %310 = icmp eq i32 %x.0, 0
  br i1 %310, label %i2h.exit, label %.lr.ph5.i.preheader

.lr.ph5.i.preheader:                              ; preds = %309
  br label %.lr.ph5.i

.lr.ph5.i:                                        ; preds = %.lr.ph5.i, %.lr.ph5.i.preheader
  %c.04.i = phi i32 [ %313, %.lr.ph5.i ], [ 0, %.lr.ph5.i.preheader ]
  %.013.i = phi i32 [ %315, %.lr.ph5.i ], [ %x.0, %.lr.ph5.i.preheader ]
  %311 = and i32 %.013.i, 15
  %312 = icmp ult i32 %311, 10
  %.0.in.v.i = select i1 %312, i32 48, i32 55
  %.0.in.i = add nuw nsw i32 %.0.in.v.i, %311
  %.0.i11 = trunc i32 %.0.in.i to i8
  %313 = add nsw i32 %c.04.i, 1
  %314 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %c.04.i
  store i8 %.0.i11, i8* %314, align 1, !tbaa !5
  %315 = lshr i32 %.013.i, 4
  %316 = icmp eq i32 %315, 0
  br i1 %316, label %._crit_edge.i, label %.lr.ph5.i

._crit_edge.i:                                    ; preds = %.lr.ph5.i
  %.lcssa205 = phi i32 [ %313, %.lr.ph5.i ]
  %c.04.i.lcssa = phi i32 [ %c.04.i, %.lr.ph5.i ]
  %317 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.lcssa205
  store i8 0, i8* %317, align 1, !tbaa !5
  %318 = icmp sgt i32 %c.04.i.lcssa, -1
  br i1 %318, label %.lr.ph.i10.preheader, label %i2h.exit

.lr.ph.i10.preheader:                             ; preds = %._crit_edge.i
  br label %.lr.ph.i10

.lr.ph.i10:                                       ; preds = %.lr.ph.i10, %.lr.ph.i10.preheader
  %.in.i = phi i32 [ %319, %.lr.ph.i10 ], [ %.lcssa205, %.lr.ph.i10.preheader ]
  %.12.i = phi i32 [ %322, %.lr.ph.i10 ], [ 0, %.lr.ph.i10.preheader ]
  %319 = add nsw i32 %.in.i, -1
  %320 = getelementptr inbounds [9 x i8]* %thex.i, i32 0, i32 %319
  %321 = load i8* %320, align 1, !tbaa !5
  %322 = add i32 %.12.i, 1
  %323 = getelementptr inbounds [9 x i8]* @i2h.hex, i32 0, i32 %.12.i
  store i8 %321, i8* %323, align 1, !tbaa !5
  %exitcond.i = icmp eq i32 %322, %.lcssa205
  br i1 %exitcond.i, label %i2h.exit.loopexit, label %.lr.ph.i10

i2h.exit.loopexit:                                ; preds = %.lr.ph.i10
  br label %i2h.exit

i2h.exit:                                         ; preds = %i2h.exit.loopexit, %._crit_edge.i, %309
  %.0.i = phi i8* [ getelementptr inbounds ([2 x i8]* @.str, i32 0, i32 0), %309 ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %._crit_edge.i ], [ getelementptr inbounds ([9 x i8]* @i2h.hex, i32 0, i32 0), %i2h.exit.loopexit ]
  %324 = load i8* %.0.i, align 1, !tbaa !5
  %325 = icmp eq i8 %324, 0
  br i1 %325, label %print_uart.exit, label %.lr.ph.i7.preheader

.lr.ph.i7.preheader:                              ; preds = %i2h.exit
  br label %.lr.ph.i7

.lr.ph.i7:                                        ; preds = %printc_uart.exit.i8, %.lr.ph.i7.preheader
  %326 = phi i8 [ %332, %printc_uart.exit.i8 ], [ %324, %.lr.ph.i7.preheader ]
  %.01.i6 = phi i8* [ %330, %printc_uart.exit.i8 ], [ %.0.i, %.lr.ph.i7.preheader ]
  br label %327

; <label>:327                                     ; preds = %327, %.lr.ph.i7
  %328 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %329 = icmp ult i32 %328, 65536
  br i1 %329, label %327, label %printc_uart.exit.i8

printc_uart.exit.i8:                              ; preds = %327
  %330 = getelementptr inbounds i8* %.01.i6, i32 1
  %331 = sext i8 %326 to i32
  store volatile i32 %331, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %332 = load i8* %330, align 1, !tbaa !5
  %333 = icmp eq i8 %332, 0
  br i1 %333, label %print_uart.exit.loopexit204, label %.lr.ph.i7

.preheader144:                                    ; preds = %.preheader144, %.preheader144.preheader
  %334 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %335 = icmp ult i32 %334, 65536
  br i1 %335, label %.preheader144, label %printc_uart.exit5

printc_uart.exit5:                                ; preds = %.preheader144
  store volatile i32 37, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  br label %print_uart.exit

.preheader133:                                    ; preds = %.preheader133, %.preheader133.preheader
  %336 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %337 = icmp ult i32 %336, 65536
  br i1 %337, label %.preheader133, label %printc_uart.exit4

printc_uart.exit4:                                ; preds = %.preheader133
  store volatile i32 37, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %338 = load i8* %13, align 1, !tbaa !5
  br label %339

; <label>:339                                     ; preds = %339, %printc_uart.exit4
  %340 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %341 = icmp ult i32 %340, 65536
  br i1 %341, label %339, label %printc_uart.exit3

printc_uart.exit3:                                ; preds = %339
  %342 = sext i8 %338 to i32
  store volatile i32 %342, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  br label %print_uart.exit

print_uart.exit.loopexit:                         ; preds = %printc_uart.exit.i
  br label %print_uart.exit

print_uart.exit.loopexit195:                      ; preds = %printc_uart.exit.i38
  br label %print_uart.exit

print_uart.exit.loopexit196:                      ; preds = %printc_uart.exit.i128
  br label %print_uart.exit

print_uart.exit.loopexit197:                      ; preds = %printc_uart.exit.i108
  br label %print_uart.exit

print_uart.exit.loopexit198:                      ; preds = %printc_uart.exit.i89
  br label %print_uart.exit

print_uart.exit.loopexit199:                      ; preds = %printc_uart.exit.i79
  br label %print_uart.exit

print_uart.exit.loopexit200:                      ; preds = %printc_uart.exit.i60
  br label %print_uart.exit

print_uart.exit.loopexit201:                      ; preds = %printc_uart.exit.i43
  br label %print_uart.exit

print_uart.exit.loopexit202:                      ; preds = %printc_uart.exit.i33
  br label %print_uart.exit

print_uart.exit.loopexit203:                      ; preds = %printc_uart.exit.i14
  br label %print_uart.exit

print_uart.exit.loopexit204:                      ; preds = %printc_uart.exit.i8
  br label %print_uart.exit

print_uart.exit:                                  ; preds = %print_uart.exit.loopexit204, %print_uart.exit.loopexit203, %print_uart.exit.loopexit202, %print_uart.exit.loopexit201, %print_uart.exit.loopexit200, %print_uart.exit.loopexit199, %print_uart.exit.loopexit198, %print_uart.exit.loopexit197, %print_uart.exit.loopexit196, %print_uart.exit.loopexit195, %print_uart.exit.loopexit, %printc_uart.exit3, %printc_uart.exit5, %i2h.exit, %i2h.exit27, %272, %259, %l2h.exit, %l2h.exit73, %ltoa.exit, %130, %i2h.exit102, %i2h.exit121, %printc_uart.exit125, %48, %32, %16
  %k.4 = phi i32 [ %.k.1, %printc_uart.exit3 ], [ %.k.1, %printc_uart.exit5 ], [ %268, %259 ], [ %.k.1, %130 ], [ %.k.1, %printc_uart.exit125 ], [ %.k.1, %16 ], [ %.k.1, %32 ], [ %.k.1, %48 ], [ %.k.1, %i2h.exit121 ], [ %.k.1, %i2h.exit102 ], [ %131, %ltoa.exit ], [ %131, %l2h.exit73 ], [ %131, %l2h.exit ], [ %268, %272 ], [ %268, %i2h.exit27 ], [ %268, %i2h.exit ], [ %.k.1, %print_uart.exit.loopexit ], [ %.k.1, %print_uart.exit.loopexit195 ], [ %.k.1, %print_uart.exit.loopexit196 ], [ %.k.1, %print_uart.exit.loopexit197 ], [ %.k.1, %print_uart.exit.loopexit198 ], [ %131, %print_uart.exit.loopexit199 ], [ %131, %print_uart.exit.loopexit200 ], [ %131, %print_uart.exit.loopexit201 ], [ %268, %print_uart.exit.loopexit202 ], [ %268, %print_uart.exit.loopexit203 ], [ %268, %print_uart.exit.loopexit204 ]
  %343 = add nsw i32 %k.4, 1
  br label %4

; <label>:344                                     ; preds = %4
  %.lcssa217 = phi i8 [ %6, %4 ]
  %.lcssa214 = phi i8* [ %5, %4 ]
  %k.0.lcssa = phi i32 [ %k.0, %4 ]
  %345 = icmp ne i8 %.lcssa217, 10
  %346 = icmp ne i32 %prev_r.0.ph, 0
  %or.cond = or i1 %345, %346
  br i1 %or.cond, label %.thread, label %.preheader.preheader

.preheader.preheader:                             ; preds = %344
  br label %.preheader

.preheader:                                       ; preds = %.preheader, %.preheader.preheader
  %347 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %348 = icmp ult i32 %347, 65536
  br i1 %348, label %.preheader, label %printc_uart.exit2

printc_uart.exit2:                                ; preds = %.preheader
  store volatile i32 13, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %.pre = load i8* %.lcssa214, align 1, !tbaa !5
  br label %.thread

.thread.loopexit:                                 ; preds = %4
  %k.0.lcssa212 = phi i32 [ %k.0, %4 ]
  br label %.thread

.thread:                                          ; preds = %.thread.loopexit, %printc_uart.exit2, %344
  %k.0213 = phi i32 [ %k.0.lcssa, %344 ], [ %k.0.lcssa, %printc_uart.exit2 ], [ %k.0.lcssa212, %.thread.loopexit ]
  %349 = phi i8 [ %.lcssa217, %344 ], [ %.pre, %printc_uart.exit2 ], [ 13, %.thread.loopexit ]
  %prev_r.1132 = phi i32 [ %prev_r.0.ph, %344 ], [ 0, %printc_uart.exit2 ], [ 1, %.thread.loopexit ]
  br label %350

; <label>:350                                     ; preds = %350, %.thread
  %351 = load volatile i32* inttoptr (i32 -14675964 to i32*), align 4, !tbaa !1
  %352 = icmp ult i32 %351, 65536
  br i1 %352, label %350, label %printc_uart.exit

printc_uart.exit:                                 ; preds = %350
  %353 = sext i8 %349 to i32
  store volatile i32 %353, i32* inttoptr (i32 -14675968 to i32*), align 4096, !tbaa !1
  %354 = add nsw i32 %k.0213, 1
  br label %.outer

; <label>:355                                     ; preds = %4
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
