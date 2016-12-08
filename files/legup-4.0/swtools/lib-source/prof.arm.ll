; ModuleID = 'prof.arm.bc'
target datalayout = "e-m:e-p:32:32-f64:32:64-f80:32-n8:16:32-S128"
target triple = "i386-unknown-linux-gnu"

%struct.Entry = type { [84 x i8], i32, i32, i32, i32, [6 x i32], [6 x i32], [2 x i32], [2 x i32] }

@events = global [6 x i32] [i32 16, i32 18, i32 96, i32 97, i32 104, i32 112], align 4
@l2c_events = global [2 x i32] [i32 2, i32 3], align 4
@L2C_BASE = global i32* inttoptr (i64 4294897664 to i32*), align 4
@L2C_EV_COUNTER_CTRL = global i32* inttoptr (i64 4294898176 to i32*), align 4
@L2C_EV_COUNTER0_CFG = global i32* inttoptr (i64 4294898180 to i32*), align 4
@L2C_EV_COUNTER1_CFG = global i32* inttoptr (i64 4294898184 to i32*), align 4
@L2C_EV_COUNTER0 = global i32* inttoptr (i64 4294898188 to i32*), align 4
@L2C_EV_COUNTER1 = global i32* inttoptr (i64 4294898192 to i32*), align 4
@legup_counters = common global [64 x i32] zeroinitializer, align 4
@CURRENT = common global i32 0, align 4
@NEXT = common global i32 0, align 4
@entries = common global [1024 x %struct.Entry] zeroinitializer, align 4
@.str = private unnamed_addr constant [38 x i8] c"\09\09\09\09\09\09\09\09    Cycles\09\09\09  Events (hier)\0A\00", align 1
@.str1 = private unnamed_addr constant [42 x i8] c"index\09function\09\09parent\09\09\09calls\09self\09hier\09\00", align 1
@.str2 = private unnamed_addr constant [9 x i8] c"ev 0x%x\09\00", align 1
@.str3 = private unnamed_addr constant [2 x i8] c"\09\00", align 1
@.str4 = private unnamed_addr constant [10 x i8] c"L2C 0x%x\09\00", align 1
@.str5 = private unnamed_addr constant [9 x i8] c"L2C 0x%x\00", align 1
@.str6 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1
@.str7 = private unnamed_addr constant [2 x i8] c"=\00", align 1
@.str8 = private unnamed_addr constant [4 x i8] c"%d\09\00", align 1
@.str9 = private unnamed_addr constant [4 x i8] c"%s\09\00", align 1
@.str10 = private unnamed_addr constant [7 x i8] c"---\09\09\09\00", align 1

; Function Attrs: nounwind
define void @legup_start_counter(i32 %i) #0 {
  %1 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 0", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !1
  %2 = getelementptr inbounds [64 x i32]* @legup_counters, i32 0, i32 %i
  store i32 %1, i32* %2, align 4, !tbaa !2
  ret void
}

; Function Attrs: nounwind
define i32 @legup_stop_counter(i32 %i) #0 {
  %1 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 0", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !6
  %2 = getelementptr inbounds [64 x i32]* @legup_counters, i32 0, i32 %i
  %3 = load i32* %2, align 4, !tbaa !2
  %4 = sub i32 %1, %3
  ret i32 %4
}

; Function Attrs: nounwind
define void @__legup_prof_init() #0 {
  store volatile i32 251658240, i32* inttoptr (i32 -9400316 to i32*), align 4, !tbaa !2
  store volatile i32 0, i32* inttoptr (i32 -3125220 to i32*), align 4, !tbaa !2
  store volatile i32 0, i32* inttoptr (i32 -65536 to i32*), align 65536, !tbaa !2
  store i32 -1, i32* @CURRENT, align 4, !tbaa !2
  store i32 0, i32* @NEXT, align 4, !tbaa !2
  br label %.preheader2

.preheader2:                                      ; preds = %.preheader19, %0
  %i.07 = phi i32 [ 0, %0 ], [ %38, %.preheader19 ]
  br label %16

.preheader:                                       ; preds = %.preheader19
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 0) #2, !srcloc !7
  %1 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 0), align 4, !tbaa !2
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c13, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 %1) #2, !srcloc !8
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 1) #2, !srcloc !9
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 1) #2, !srcloc !7
  %2 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 1), align 4, !tbaa !2
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c13, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 %2) #2, !srcloc !8
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 2) #2, !srcloc !9
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 2) #2, !srcloc !7
  %3 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 2), align 4, !tbaa !2
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c13, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 %3) #2, !srcloc !8
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 4) #2, !srcloc !9
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 3) #2, !srcloc !7
  %4 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 3), align 4, !tbaa !2
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c13, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 %4) #2, !srcloc !8
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 8) #2, !srcloc !9
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 4) #2, !srcloc !7
  %5 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 4), align 4, !tbaa !2
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c13, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 %5) #2, !srcloc !8
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 16) #2, !srcloc !9
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 5) #2, !srcloc !7
  %6 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 5), align 4, !tbaa !2
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c13, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 %6) #2, !srcloc !8
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 32) #2, !srcloc !9
  %7 = load i32* getelementptr inbounds ([2 x i32]* @l2c_events, i32 0, i32 0), align 4, !tbaa !2
  %8 = shl i32 %7, 2
  %9 = load i32** @L2C_EV_COUNTER0_CFG, align 4, !tbaa !10
  store volatile i32 %8, i32* %9, align 4, !tbaa !2
  %10 = load i32* getelementptr inbounds ([2 x i32]* @l2c_events, i32 0, i32 1), align 4, !tbaa !2
  %11 = shl i32 %10, 2
  %12 = load i32** @L2C_EV_COUNTER1_CFG, align 4, !tbaa !10
  store volatile i32 %11, i32* %12, align 4, !tbaa !2
  %13 = load i32** @L2C_EV_COUNTER_CTRL, align 4, !tbaa !10
  store volatile i32 7, i32* %13, align 4, !tbaa !2
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 1", "r,~{dirflag},~{fpsr},~{flags}"(i32 -2147483648) #2, !srcloc !12
  %14 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c12, 0", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !13
  %15 = or i32 %14, 7
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 0", "r,~{dirflag},~{fpsr},~{flags}"(i32 %15) #2, !srcloc !14
  ret void

; <label>:16                                      ; preds = %16, %.preheader2
  %j.04 = phi i32 [ 0, %.preheader2 ], [ %18, %16 ]
  %17 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 0, i32 %j.04
  store i8 0, i8* %17, align 1, !tbaa !15
  %18 = add nsw i32 %j.04, 1
  %exitcond = icmp eq i32 %18, 44
  br i1 %exitcond, label %.preheader19, label %16

.preheader19:                                     ; preds = %16
  %19 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 2
  store i32 0, i32* %19, align 4, !tbaa !16
  %20 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 3
  store i32 0, i32* %20, align 4, !tbaa !18
  %21 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 4
  store i32 0, i32* %21, align 4, !tbaa !19
  %22 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 5, i32 0
  store i32 0, i32* %22, align 4, !tbaa !2
  %23 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 6, i32 0
  store i32 0, i32* %23, align 4, !tbaa !2
  %24 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 5, i32 1
  store i32 0, i32* %24, align 4, !tbaa !2
  %25 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 6, i32 1
  store i32 0, i32* %25, align 4, !tbaa !2
  %26 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 5, i32 2
  store i32 0, i32* %26, align 4, !tbaa !2
  %27 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 6, i32 2
  store i32 0, i32* %27, align 4, !tbaa !2
  %28 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 5, i32 3
  store i32 0, i32* %28, align 4, !tbaa !2
  %29 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 6, i32 3
  store i32 0, i32* %29, align 4, !tbaa !2
  %30 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 5, i32 4
  store i32 0, i32* %30, align 4, !tbaa !2
  %31 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 6, i32 4
  store i32 0, i32* %31, align 4, !tbaa !2
  %32 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 5, i32 5
  store i32 0, i32* %32, align 4, !tbaa !2
  %33 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 6, i32 5
  store i32 0, i32* %33, align 4, !tbaa !2
  %34 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 7, i32 0
  store i32 0, i32* %34, align 4, !tbaa !2
  %35 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 8, i32 0
  store i32 0, i32* %35, align 4, !tbaa !2
  %36 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 7, i32 1
  store i32 0, i32* %36, align 4, !tbaa !2
  %37 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.07, i32 8, i32 1
  store i32 0, i32* %37, align 4, !tbaa !2
  %38 = add nsw i32 %i.07, 1
  %exitcond11 = icmp eq i32 %38, 1024
  br i1 %exitcond11, label %.preheader, label %.preheader2
}

; Function Attrs: nounwind
define void @update_counts() #0 {
.preheader5:
  %counts = alloca [6 x i32], align 4
  %0 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c12, 0", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !20
  %1 = and i32 %0, -2
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 0", "r,~{dirflag},~{fpsr},~{flags}"(i32 %1) #2, !srcloc !21
  %2 = load i32** @L2C_EV_COUNTER_CTRL, align 4, !tbaa !10
  store volatile i32 0, i32* %2, align 4, !tbaa !2
  %3 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 0", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !22
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 0) #2, !srcloc !23
  %4 = getelementptr inbounds [6 x i32]* %counts, i32 0, i32 0
  %5 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 2", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !24
  store i32 %5, i32* %4, align 4, !tbaa !25
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 1) #2, !srcloc !23
  %6 = getelementptr inbounds [6 x i32]* %counts, i32 0, i32 1
  %7 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 2", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !24
  store i32 %7, i32* %6, align 4, !tbaa !25
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 2) #2, !srcloc !23
  %8 = getelementptr inbounds [6 x i32]* %counts, i32 0, i32 2
  %9 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 2", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !24
  store i32 %9, i32* %8, align 4, !tbaa !25
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 3) #2, !srcloc !23
  %10 = getelementptr inbounds [6 x i32]* %counts, i32 0, i32 3
  %11 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 2", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !24
  store i32 %11, i32* %10, align 4, !tbaa !25
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 4) #2, !srcloc !23
  %12 = getelementptr inbounds [6 x i32]* %counts, i32 0, i32 4
  %13 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 2", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !24
  store i32 %13, i32* %12, align 4, !tbaa !25
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 5", "r,~{dirflag},~{fpsr},~{flags}"(i32 5) #2, !srcloc !23
  %14 = getelementptr inbounds [6 x i32]* %counts, i32 0, i32 5
  %15 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c13, 2", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !24
  store i32 %15, i32* %14, align 4, !tbaa !25
  %16 = load i32** @L2C_EV_COUNTER0, align 4, !tbaa !10
  %17 = load volatile i32* %16, align 4, !tbaa !2
  %18 = load i32** @L2C_EV_COUNTER1, align 4, !tbaa !10
  %19 = load volatile i32* %18, align 4, !tbaa !2
  %20 = load i32* @CURRENT, align 4, !tbaa !2
  %21 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 7, i32 0
  %22 = load i32* %21, align 4, !tbaa !2
  %23 = add i32 %22, %17
  store i32 %23, i32* %21, align 4, !tbaa !2
  %24 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 7, i32 1
  %25 = load i32* %24, align 4, !tbaa !2
  %26 = add i32 %25, %19
  store i32 %26, i32* %24, align 4, !tbaa !2
  %27 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 3
  %28 = load i32* %27, align 4, !tbaa !18
  %29 = add i32 %28, %3
  store i32 %29, i32* %27, align 4, !tbaa !18
  %30 = load i32* %4, align 4, !tbaa !25
  %31 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 5, i32 0
  %32 = load i32* %31, align 4, !tbaa !2
  %33 = add i32 %32, %30
  store i32 %33, i32* %31, align 4, !tbaa !2
  %34 = load i32* %6, align 4, !tbaa !25
  %35 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 5, i32 1
  %36 = load i32* %35, align 4, !tbaa !2
  %37 = add i32 %36, %34
  store i32 %37, i32* %35, align 4, !tbaa !2
  %38 = load i32* %8, align 4, !tbaa !25
  %39 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 5, i32 2
  %40 = load i32* %39, align 4, !tbaa !2
  %41 = add i32 %40, %38
  store i32 %41, i32* %39, align 4, !tbaa !2
  %42 = load i32* %10, align 4, !tbaa !25
  %43 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 5, i32 3
  %44 = load i32* %43, align 4, !tbaa !2
  %45 = add i32 %44, %42
  store i32 %45, i32* %43, align 4, !tbaa !2
  %46 = load i32* %12, align 4, !tbaa !25
  %47 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 5, i32 4
  %48 = load i32* %47, align 4, !tbaa !2
  %49 = add i32 %48, %46
  store i32 %49, i32* %47, align 4, !tbaa !2
  %50 = load i32* %14, align 4, !tbaa !25
  %51 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %20, i32 5, i32 5
  %52 = load i32* %51, align 4, !tbaa !2
  %53 = add i32 %52, %50
  store i32 %53, i32* %51, align 4, !tbaa !2
  %54 = icmp sgt i32 %20, -1
  br i1 %54, label %.lr.ph.preheader, label %._crit_edge

.lr.ph.preheader:                                 ; preds = %.preheader5
  br label %.lr.ph

.lr.ph:                                           ; preds = %.lr.ph, %.lr.ph.preheader
  %ptr.02 = phi i32 [ %83, %.lr.ph ], [ %20, %.lr.ph.preheader ]
  %55 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 4
  %56 = load i32* %55, align 4, !tbaa !19
  %57 = add i32 %56, %3
  store i32 %57, i32* %55, align 4, !tbaa !19
  %58 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 6, i32 0
  %59 = load i32* %58, align 4, !tbaa !2
  %60 = add i32 %59, %30
  store i32 %60, i32* %58, align 4, !tbaa !2
  %61 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 6, i32 1
  %62 = load i32* %61, align 4, !tbaa !2
  %63 = add i32 %62, %34
  store i32 %63, i32* %61, align 4, !tbaa !2
  %64 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 6, i32 2
  %65 = load i32* %64, align 4, !tbaa !2
  %66 = add i32 %65, %38
  store i32 %66, i32* %64, align 4, !tbaa !2
  %67 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 6, i32 3
  %68 = load i32* %67, align 4, !tbaa !2
  %69 = add i32 %68, %42
  store i32 %69, i32* %67, align 4, !tbaa !2
  %70 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 6, i32 4
  %71 = load i32* %70, align 4, !tbaa !2
  %72 = add i32 %71, %46
  store i32 %72, i32* %70, align 4, !tbaa !2
  %73 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 6, i32 5
  %74 = load i32* %73, align 4, !tbaa !2
  %75 = add i32 %74, %50
  store i32 %75, i32* %73, align 4, !tbaa !2
  %76 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 8, i32 0
  %77 = load i32* %76, align 4, !tbaa !2
  %78 = add i32 %77, %17
  store i32 %78, i32* %76, align 4, !tbaa !2
  %79 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 8, i32 1
  %80 = load i32* %79, align 4, !tbaa !2
  %81 = add i32 %80, %19
  store i32 %81, i32* %79, align 4, !tbaa !2
  %82 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %ptr.02, i32 1
  %83 = load i32* %82, align 4, !tbaa !27
  %84 = icmp sgt i32 %83, -1
  br i1 %84, label %.lr.ph, label %._crit_edge.loopexit

._crit_edge.loopexit:                             ; preds = %.lr.ph
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %.preheader5
  ret void
}

; Function Attrs: nounwind
define void @reset_counts() #0 {
  %1 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c12, 0", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !28
  %2 = or i32 %1, 7
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 0", "r,~{dirflag},~{fpsr},~{flags}"(i32 %2) #2, !srcloc !29
  %3 = load i32** @L2C_EV_COUNTER_CTRL, align 4, !tbaa !10
  store volatile i32 7, i32* %3, align 4, !tbaa !2
  ret void
}

; Function Attrs: nounwind
define void @__legup_prof_begin(i8* nocapture readonly %fn_name) #0 {
  tail call void @update_counts() #3
  %1 = load i32* @CURRENT, align 4, !tbaa !2
  %2 = load i32* @NEXT, align 4, !tbaa !2
  %3 = icmp sgt i32 %2, 0
  br i1 %3, label %.preheader8.lr.ph, label %._crit_edge

.preheader8.lr.ph:                                ; preds = %0
  %4 = load i8* %fn_name, align 1, !tbaa !15
  %5 = icmp eq i8 %4, 0
  br i1 %5, label %.critedge.preheader, label %.lr.ph22.us.preheader

.lr.ph22.us.preheader:                            ; preds = %.preheader8.lr.ph
  br label %.lr.ph22.us

.critedge.preheader:                              ; preds = %.preheader8.lr.ph
  br label %.critedge

; <label>:6                                       ; preds = %11
  %7 = getelementptr inbounds i8* %fn_name, i32 %17
  %8 = load i8* %7, align 1, !tbaa !15
  %9 = icmp ne i8 %8, 0
  %10 = icmp slt i32 %17, 83
  %or.cond.us = and i1 %9, %10
  br i1 %or.cond.us, label %11, label %.critedge.us.loopexit

; <label>:11                                      ; preds = %.lr.ph22.us, %6
  %12 = phi i8 [ %4, %.lr.ph22.us ], [ %8, %6 ]
  %13 = phi i8* [ %fn_name, %.lr.ph22.us ], [ %7, %6 ]
  %ndx.021.us = phi i32 [ 0, %.lr.ph22.us ], [ %17, %6 ]
  %14 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.025.us, i32 0, i32 %ndx.021.us
  %15 = load i8* %14, align 1, !tbaa !15
  %16 = icmp eq i8 %12, %15
  %17 = add nsw i32 %ndx.021.us, 1
  br i1 %16, label %6, label %.critedgethread-pre-split.us

.critedgethread-pre-split.us:                     ; preds = %11
  %ndx.021.us.lcssa = phi i32 [ %ndx.021.us, %11 ]
  %.lcssa55 = phi i8* [ %13, %11 ]
  %.pr.us = load i8* %.lcssa55, align 1, !tbaa !15
  br label %.critedge.us

.critedge.us.loopexit:                            ; preds = %6
  %.lcssa60 = phi i8 [ %8, %6 ]
  %.lcssa59 = phi i32 [ %17, %6 ]
  br label %.critedge.us

.critedge.us:                                     ; preds = %.critedge.us.loopexit, %.critedgethread-pre-split.us
  %ndx.011.us = phi i32 [ %ndx.021.us.lcssa, %.critedgethread-pre-split.us ], [ %.lcssa59, %.critedge.us.loopexit ]
  %18 = phi i8 [ %.pr.us, %.critedgethread-pre-split.us ], [ %.lcssa60, %.critedge.us.loopexit ]
  %same_name.0.us = phi i32 [ 0, %.critedgethread-pre-split.us ], [ 1, %.critedge.us.loopexit ]
  %19 = icmp eq i8 %18, 0
  br i1 %19, label %20, label %23

; <label>:20                                      ; preds = %.critedge.us
  %21 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.025.us, i32 0, i32 %ndx.011.us
  %22 = load i8* %21, align 1, !tbaa !15
  switch i8 %22, label %.thread.us [
    i8 0, label %23
    i8 32, label %.thread7.us
  ]

; <label>:23                                      ; preds = %20, %.critedge.us
  %24 = icmp eq i32 %same_name.0.us, 0
  br i1 %24, label %.thread.us, label %.thread7.us

.thread7.us:                                      ; preds = %23, %20
  %25 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.025.us, i32 1
  %26 = load i32* %25, align 4, !tbaa !27
  %27 = icmp eq i32 %26, %1
  br i1 %27, label %.critedge6.loopexit51, label %.thread.us

.thread.us:                                       ; preds = %.thread7.us, %23, %20
  %28 = add nsw i32 %i.025.us, 1
  %29 = icmp slt i32 %28, %2
  br i1 %29, label %.lr.ph22.us, label %._crit_edge.loopexit52

.lr.ph22.us:                                      ; preds = %.thread.us, %.lr.ph22.us.preheader
  %i.025.us = phi i32 [ %28, %.thread.us ], [ 0, %.lr.ph22.us.preheader ]
  br label %11

.critedge:                                        ; preds = %.thread, %.critedge.preheader
  %i.025 = phi i32 [ %35, %.thread ], [ 0, %.critedge.preheader ]
  %30 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.025, i32 0, i32 0
  %31 = load i8* %30, align 4, !tbaa !15
  switch i8 %31, label %.thread [
    i8 0, label %.thread7
    i8 32, label %.thread7
  ]

.thread7:                                         ; preds = %.critedge, %.critedge
  %32 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %i.025, i32 1
  %33 = load i32* %32, align 4, !tbaa !27
  %34 = icmp eq i32 %33, %1
  br i1 %34, label %.critedge6.loopexit, label %.thread

.critedge6.loopexit:                              ; preds = %.thread7
  %i.025.lcssa = phi i32 [ %i.025, %.thread7 ]
  br label %.critedge6

.critedge6.loopexit51:                            ; preds = %.thread7.us
  %i.025.us.lcssa = phi i32 [ %i.025.us, %.thread7.us ]
  br label %.critedge6

.critedge6:                                       ; preds = %.critedge6.loopexit51, %.critedge6.loopexit
  %i.0.lcssa16 = phi i32 [ %i.025.lcssa, %.critedge6.loopexit ], [ %i.025.us.lcssa, %.critedge6.loopexit51 ]
  store i32 %i.0.lcssa16, i32* @CURRENT, align 4, !tbaa !2
  br label %.preheader

.thread:                                          ; preds = %.thread7, %.critedge
  %35 = add nsw i32 %i.025, 1
  %36 = icmp slt i32 %35, %2
  br i1 %36, label %.critedge, label %._crit_edge.loopexit

._crit_edge.loopexit:                             ; preds = %.thread
  br label %._crit_edge

._crit_edge.loopexit52:                           ; preds = %.thread.us
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit52, %._crit_edge.loopexit, %0
  %37 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %2, i32 1
  store i32 %1, i32* %37, align 4, !tbaa !27
  store i32 %2, i32* @CURRENT, align 4, !tbaa !2
  %38 = add nsw i32 %2, 1
  store i32 %38, i32* @NEXT, align 4, !tbaa !2
  br label %.preheader

.preheader:                                       ; preds = %._crit_edge, %.critedge6
  %39 = phi i32 [ %i.0.lcssa16, %.critedge6 ], [ %2, %._crit_edge ]
  %.pre = load i8* %fn_name, align 1, !tbaa !15
  br label %40

; <label>:40                                      ; preds = %40, %.preheader
  %41 = phi i8 [ %45, %40 ], [ %.pre, %.preheader ]
  %ndx1.0 = phi i32 [ %43, %40 ], [ 0, %.preheader ]
  %42 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %39, i32 0, i32 %ndx1.0
  store i8 %41, i8* %42, align 1, !tbaa !15
  %43 = add nsw i32 %ndx1.0, 1
  %44 = getelementptr inbounds i8* %fn_name, i32 %43
  %45 = load i8* %44, align 1, !tbaa !15
  %46 = icmp ne i8 %45, 0
  %47 = icmp slt i32 %43, 83
  %or.cond5 = and i1 %46, %47
  br i1 %or.cond5, label %40, label %.critedge2.preheader

.critedge2.preheader:                             ; preds = %40
  %.lcssa53 = phi i32 [ %43, %40 ]
  %48 = icmp slt i32 %.lcssa53, 16
  %49 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %39, i32 0, i32 %.lcssa53
  br i1 %48, label %.critedge2.preheader50, label %53

.critedge2.preheader50:                           ; preds = %.critedge2.preheader
  br label %.critedge2

.critedge2:                                       ; preds = %.critedge2, %.critedge2.preheader50
  %50 = phi i8* [ %52, %.critedge2 ], [ %49, %.critedge2.preheader50 ]
  %ndx1.119 = phi i32 [ %51, %.critedge2 ], [ %.lcssa53, %.critedge2.preheader50 ]
  store i8 32, i8* %50, align 1, !tbaa !15
  %51 = add nsw i32 %ndx1.119, 1
  %52 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %39, i32 0, i32 %51
  %exitcond = icmp eq i32 %51, 16
  br i1 %exitcond, label %.critedge2._crit_edge, label %.critedge2

.critedge2._crit_edge:                            ; preds = %.critedge2
  %scevgep = getelementptr [1024 x %struct.Entry]* @entries, i32 0, i32 %39, i32 0, i32 16
  br label %53

; <label>:53                                      ; preds = %.critedge2._crit_edge, %.critedge2.preheader
  %.lcssa = phi i8* [ %scevgep, %.critedge2._crit_edge ], [ %49, %.critedge2.preheader ]
  store i8 0, i8* %.lcssa, align 1, !tbaa !15
  %54 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %39, i32 2
  %55 = load i32* %54, align 4, !tbaa !16
  %56 = add i32 %55, 1
  store i32 %56, i32* %54, align 4, !tbaa !16
  %57 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c12, 0", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !28
  %58 = or i32 %57, 7
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 0", "r,~{dirflag},~{fpsr},~{flags}"(i32 %58) #2, !srcloc !29
  %59 = load i32** @L2C_EV_COUNTER_CTRL, align 4, !tbaa !10
  store volatile i32 7, i32* %59, align 4, !tbaa !2
  ret void
}

; Function Attrs: nounwind
define void @__legup_prof_end() #0 {
  tail call void @update_counts() #3
  %1 = load i32* @CURRENT, align 4, !tbaa !2
  %2 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %1, i32 1
  %3 = load i32* %2, align 4, !tbaa !27
  store i32 %3, i32* @CURRENT, align 4, !tbaa !2
  %4 = tail call i32 asm sideeffect "MRC p15, 0, $0, c9, c12, 0", "=r,~{dirflag},~{fpsr},~{flags}"() #2, !srcloc !28
  %5 = or i32 %4, 7
  tail call void asm sideeffect "MCR p15, 0, $0, c9, c12, 0", "r,~{dirflag},~{fpsr},~{flags}"(i32 %5) #2, !srcloc !29
  %6 = load i32** @L2C_EV_COUNTER_CTRL, align 4, !tbaa !10
  store volatile i32 7, i32* %6, align 4, !tbaa !2
  ret void
}

; Function Attrs: nounwind
define void @__legup_prof_print() #0 {
  %1 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([38 x i8]* @.str, i32 0, i32 0)) #4
  %2 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([42 x i8]* @.str1, i32 0, i32 0)) #4
  %3 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 0), align 4, !tbaa !2
  %4 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @.str2, i32 0, i32 0), i32 %3) #4
  %5 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str3, i32 0, i32 0)) #4
  %6 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 1), align 4, !tbaa !2
  %7 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @.str2, i32 0, i32 0), i32 %6) #4
  %8 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str3, i32 0, i32 0)) #4
  %9 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 2), align 4, !tbaa !2
  %10 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @.str2, i32 0, i32 0), i32 %9) #4
  %11 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str3, i32 0, i32 0)) #4
  %12 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 3), align 4, !tbaa !2
  %13 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @.str2, i32 0, i32 0), i32 %12) #4
  %14 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str3, i32 0, i32 0)) #4
  %15 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 4), align 4, !tbaa !2
  %16 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @.str2, i32 0, i32 0), i32 %15) #4
  %17 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str3, i32 0, i32 0)) #4
  %18 = load i32* getelementptr inbounds ([6 x i32]* @events, i32 0, i32 5), align 4, !tbaa !2
  %19 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @.str2, i32 0, i32 0), i32 %18) #4
  %20 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str3, i32 0, i32 0)) #4
  %21 = load i32* getelementptr inbounds ([2 x i32]* @l2c_events, i32 0, i32 0), align 4, !tbaa !2
  %22 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([10 x i8]* @.str4, i32 0, i32 0), i32 %21) #4
  %23 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str3, i32 0, i32 0)) #4
  %24 = load i32* getelementptr inbounds ([2 x i32]* @l2c_events, i32 0, i32 1), align 4, !tbaa !2
  %25 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([9 x i8]* @.str5, i32 0, i32 0), i32 %24) #4
  %26 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str6, i32 0, i32 0)) #4
  br label %27

; <label>:27                                      ; preds = %27, %0
  %i.13 = phi i32 [ 0, %0 ], [ %29, %27 ]
  %28 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str7, i32 0, i32 0)) #4
  %29 = add nsw i32 %i.13, 1
  %exitcond = icmp eq i32 %29, 200
  br i1 %exitcond, label %30, label %27

; <label>:30                                      ; preds = %27
  %31 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str6, i32 0, i32 0)) #4
  %32 = load i32* @NEXT, align 4, !tbaa !2
  %33 = icmp eq i32 %32, 0
  br i1 %33, label %._crit_edge, label %.lr.ph.preheader

.lr.ph.preheader:                                 ; preds = %30
  br label %.lr.ph

.lr.ph:                                           ; preds = %45, %.lr.ph.preheader
  %p.02 = phi i32 [ %104, %45 ], [ 0, %.lr.ph.preheader ]
  %34 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %p.02) #4
  %35 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 0, i32 0
  %36 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str9, i32 0, i32 0), i8* %35) #4
  %37 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 1
  %38 = load i32* %37, align 4, !tbaa !27
  %39 = icmp sgt i32 %38, -1
  br i1 %39, label %40, label %43

; <label>:40                                      ; preds = %.lr.ph
  %41 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %38, i32 0, i32 0
  %42 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str9, i32 0, i32 0), i8* %41) #4
  br label %45

; <label>:43                                      ; preds = %.lr.ph
  %44 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([7 x i8]* @.str10, i32 0, i32 0)) #4
  br label %45

; <label>:45                                      ; preds = %43, %40
  %46 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 2
  %47 = load i32* %46, align 4, !tbaa !16
  %48 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %47) #4
  %49 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 3
  %50 = load i32* %49, align 4, !tbaa !18
  %51 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %50) #4
  %52 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 4
  %53 = load i32* %52, align 4, !tbaa !19
  %54 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %53) #4
  %55 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 5, i32 0
  %56 = load i32* %55, align 4, !tbaa !2
  %57 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %56) #4
  %58 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 6, i32 0
  %59 = load i32* %58, align 4, !tbaa !2
  %60 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %59) #4
  %61 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 5, i32 1
  %62 = load i32* %61, align 4, !tbaa !2
  %63 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %62) #4
  %64 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 6, i32 1
  %65 = load i32* %64, align 4, !tbaa !2
  %66 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %65) #4
  %67 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 5, i32 2
  %68 = load i32* %67, align 4, !tbaa !2
  %69 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %68) #4
  %70 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 6, i32 2
  %71 = load i32* %70, align 4, !tbaa !2
  %72 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %71) #4
  %73 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 5, i32 3
  %74 = load i32* %73, align 4, !tbaa !2
  %75 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %74) #4
  %76 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 6, i32 3
  %77 = load i32* %76, align 4, !tbaa !2
  %78 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %77) #4
  %79 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 5, i32 4
  %80 = load i32* %79, align 4, !tbaa !2
  %81 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %80) #4
  %82 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 6, i32 4
  %83 = load i32* %82, align 4, !tbaa !2
  %84 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %83) #4
  %85 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 5, i32 5
  %86 = load i32* %85, align 4, !tbaa !2
  %87 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %86) #4
  %88 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 6, i32 5
  %89 = load i32* %88, align 4, !tbaa !2
  %90 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %89) #4
  %91 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 7, i32 0
  %92 = load i32* %91, align 4, !tbaa !2
  %93 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %92) #4
  %94 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 8, i32 0
  %95 = load i32* %94, align 4, !tbaa !2
  %96 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %95) #4
  %97 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 7, i32 1
  %98 = load i32* %97, align 4, !tbaa !2
  %99 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %98) #4
  %100 = getelementptr inbounds [1024 x %struct.Entry]* @entries, i32 0, i32 %p.02, i32 8, i32 1
  %101 = load i32* %100, align 4, !tbaa !2
  %102 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @.str8, i32 0, i32 0), i32 %101) #4
  %103 = tail call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @.str6, i32 0, i32 0)) #4
  %104 = add nsw i32 %p.02, 1
  %105 = load i32* @NEXT, align 4, !tbaa !2
  %106 = icmp eq i32 %104, %105
  br i1 %106, label %._crit_edge.loopexit, label %.lr.ph

._crit_edge.loopexit:                             ; preds = %45
  br label %._crit_edge

._crit_edge:                                      ; preds = %._crit_edge.loopexit, %30
  ret void
}

declare i32 @printf(i8*, ...) #1

attributes #0 = { nounwind "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "less-precise-fpmad"="false" "no-frame-pointer-elim"="false" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { nounwind }
attributes #3 = { nobuiltin }
attributes #4 = { nobuiltin nounwind }

!llvm.ident = !{!0}

!0 = metadata !{metadata !"clang version 3.5.0 (tags/RELEASE_350/final)"}
!1 = metadata !{i32 434}
!2 = metadata !{metadata !3, metadata !3, i64 0}
!3 = metadata !{metadata !"int", metadata !4, i64 0}
!4 = metadata !{metadata !"omnipotent char", metadata !5, i64 0}
!5 = metadata !{metadata !"Simple C/C++ TBAA"}
!6 = metadata !{i32 679}
!7 = metadata !{i32 2248}
!8 = metadata !{i32 2378}
!9 = metadata !{i32 2508}
!10 = metadata !{metadata !11, metadata !11, i64 0}
!11 = metadata !{metadata !"any pointer", metadata !4, i64 0}
!12 = metadata !{i32 2928}
!13 = metadata !{i32 3113}
!14 = metadata !{i32 3264}
!15 = metadata !{metadata !4, metadata !4, i64 0}
!16 = metadata !{metadata !17, metadata !3, i64 88}
!17 = metadata !{metadata !"Entry", metadata !4, i64 0, metadata !3, i64 84, metadata !3, i64 88, metadata !3, i64 92, metadata !3, i64 96, metadata !4, i64 100, metadata !4, i64 124, metadata !4, i64 148, metadata !4, i64 156}
!18 = metadata !{metadata !17, metadata !3, i64 92}
!19 = metadata !{metadata !17, metadata !3, i64 96}
!20 = metadata !{i32 3479}
!21 = metadata !{i32 3599}
!22 = metadata !{i32 3786}
!23 = metadata !{i32 3950}
!24 = metadata !{i32 4013}
!25 = metadata !{metadata !26, metadata !26, i64 0}
!26 = metadata !{metadata !"long", metadata !4, i64 0}
!27 = metadata !{metadata !17, metadata !3, i64 84}
!28 = metadata !{i32 4993}
!29 = metadata !{i32 5147}
