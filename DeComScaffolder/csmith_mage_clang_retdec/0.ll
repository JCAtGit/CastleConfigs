source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_402fe0 = local_unnamed_addr global i64 0
@global_var_4011ba = constant [15 x i8] c"checksum = %X\0A\00"
@global_var_403020 = local_unnamed_addr global i8 0
@0 = internal constant [2 x i8] c"1\00"
@1 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @0, i64 0, i64 0)
@global_var_403030 = global i32* null
@global_var_4011b8 = constant [2 x i8] c"1\00"

define i64 @mage_alpha0(i32 %arg1) local_unnamed_addr {
dec_label_pc_400480:
  %0 = zext i32 %arg1 to i64, !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @mage_alpha1(i64 %arg1) local_unnamed_addr {
dec_label_pc_4004a0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !2
  ret i64 %0, !insn.addr !3
}

define i64 @mage_alpha2(i64 %arg1) local_unnamed_addr {
dec_label_pc_4004c0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !4
  ret i64 %0, !insn.addr !5
}

define i64 @mage_alpha3(i64 %arg1) local_unnamed_addr {
dec_label_pc_4004e0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !6
  ret i64 %0, !insn.addr !7
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_400500:
  %stack_var_-28.0.reg2mem = alloca i32, !insn.addr !8
  %0 = trunc i64 %argc to i32, !insn.addr !9
  %1 = call i64 @mage_alpha0(i32 0), !insn.addr !10
  %2 = call i64 @mage_alpha1(i64 1), !insn.addr !11
  %3 = icmp eq i32 %0, 2, !insn.addr !12
  %4 = icmp eq i1 %3, false, !insn.addr !13
  store i32 0, i32* %stack_var_-28.0.reg2mem, !insn.addr !13
  br i1 %4, label %dec_label_pc_400552, label %dec_label_pc_400534, !insn.addr !13

dec_label_pc_400534:                              ; preds = %dec_label_pc_400500
  %5 = ptrtoint i8** %argv to i64, !insn.addr !14
  %6 = add i64 %5, 8, !insn.addr !15
  %7 = inttoptr i64 %6 to i64*, !insn.addr !15
  %8 = load i64, i64* %7, align 8, !insn.addr !15
  %9 = inttoptr i64 %8 to i8*, !insn.addr !16
  %10 = call i32 @strcmp(i8* %9, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_4011b8, i64 0, i64 0)), !insn.addr !16
  %11 = icmp eq i32 %10, 0, !insn.addr !17
  %spec.select = zext i1 %11 to i32
  store i32 %spec.select, i32* %stack_var_-28.0.reg2mem
  br label %dec_label_pc_400552

dec_label_pc_400552:                              ; preds = %dec_label_pc_400534, %dec_label_pc_400500
  %stack_var_-28.0.reload = load i32, i32* %stack_var_-28.0.reg2mem
  %12 = call i64 @mage_alpha2(i64 2), !insn.addr !18
  %13 = call i64 @platform_main_begin(), !insn.addr !19
  %14 = call i64 @mage_alpha3(i64 3), !insn.addr !20
  %15 = call i64 @crc32_gentab(), !insn.addr !21
  %16 = call i64 @func_1(), !insn.addr !22
  %17 = load i32, i32* inttoptr (i64 4206612 to i32*), align 4, !insn.addr !23
  %18 = sub i32 0, %17
  %19 = sub i32 %18, 1
  %20 = zext i32 %19 to i64, !insn.addr !24
  %21 = call i64 @platform_main_end(i64 %20, i32 %stack_var_-28.0.reload), !insn.addr !25
  ret i64 0, !insn.addr !26
}

define i64 @platform_main_begin() local_unnamed_addr {
dec_label_pc_4005a0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !27
}

define i64 @crc32_gentab() local_unnamed_addr {
dec_label_pc_4005b0:
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !28
  %storemerge4.reg2mem = alloca i32, !insn.addr !28
  %indvars.iv.reg2mem = alloca i64, !insn.addr !28
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_4005d8.preheader

dec_label_pc_4005d8.preheader:                    ; preds = %dec_label_pc_4005b0, %dec_label_pc_40060d
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %0 = trunc i64 %indvars.iv.reload to i32
  store i32 8, i32* %storemerge4.reg2mem
  store i32 %0, i32* %stack_var_-12.03.reg2mem
  br label %dec_label_pc_4005de

dec_label_pc_4005de:                              ; preds = %dec_label_pc_4005d8.preheader, %dec_label_pc_4005de
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = urem i32 %stack_var_-12.03.reload, 2, !insn.addr !29
  %2 = icmp eq i32 %1, 0, !insn.addr !30
  %3 = udiv i32 %stack_var_-12.03.reload, 2
  %4 = xor i32 %3, -306674912
  %storemerge1 = select i1 %2, i32 %3, i32 %4
  %5 = add nsw i32 %storemerge4.reload, -1, !insn.addr !31
  %6 = icmp eq i32 %5, 0, !insn.addr !32
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !32
  store i32 %storemerge1, i32* %stack_var_-12.03.reg2mem, !insn.addr !32
  br i1 %6, label %dec_label_pc_40060d, label %dec_label_pc_4005de, !insn.addr !32

dec_label_pc_40060d:                              ; preds = %dec_label_pc_4005de
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !33
  %8 = add i64 %7, ptrtoint (i32** @global_var_403030 to i64), !insn.addr !33
  %9 = inttoptr i64 %8 to i32*, !insn.addr !33
  store i32 %storemerge1, i32* %9, align 4, !insn.addr !33
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 256
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !34
  br i1 %exitcond, label %dec_label_pc_400626, label %dec_label_pc_4005d8.preheader, !insn.addr !34

dec_label_pc_400626:                              ; preds = %dec_label_pc_40060d
  ret i64 256, !insn.addr !35

; uselistorder directives
  uselistorder i32 %storemerge1, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %stack_var_-12.03.reload, { 1, 0 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 1, 0, 2 }
  uselistorder i32 0, { 2, 4, 1, 5, 0, 3 }
  uselistorder i32 1, { 3, 2, 1, 0, 5, 4 }
  uselistorder label %dec_label_pc_4005de, { 1, 0 }
  uselistorder label %dec_label_pc_4005d8.preheader, { 1, 0 }
}

define i64 @func_1() local_unnamed_addr {
dec_label_pc_400630:
  ret i64 4, !insn.addr !36

; uselistorder directives
  uselistorder i64 4, { 1, 0 }
}

define i64 @platform_main_end(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_400650:
  %0 = trunc i64 %arg1 to i32, !insn.addr !37
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_4011ba, i64 0, i64 0), i32 %0), !insn.addr !38
  %2 = sext i32 %1 to i64, !insn.addr !38
  ret i64 %2, !insn.addr !39

; uselistorder directives
  uselistorder i64 0, { 6, 7, 0, 1, 2, 3, 4, 5, 8 }
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

!0 = !{i64 4195469}
!1 = !{i64 4195473}
!2 = !{i64 4195501}
!3 = !{i64 4195505}
!4 = !{i64 4195533}
!5 = !{i64 4195537}
!6 = !{i64 4195565}
!7 = !{i64 4195569}
!8 = !{i64 4195584}
!9 = !{i64 4195599}
!10 = !{i64 4195608}
!11 = !{i64 4195625}
!12 = !{i64 4195630}
!13 = !{i64 4195634}
!14 = !{i64 4195636}
!15 = !{i64 4195640}
!16 = !{i64 4195649}
!17 = !{i64 4195654}
!18 = !{i64 4195671}
!19 = !{i64 4195676}
!20 = !{i64 4195686}
!21 = !{i64 4195691}
!22 = !{i64 4195696}
!23 = !{i64 4195701}
!24 = !{i64 4195721}
!25 = !{i64 4195726}
!26 = !{i64 4195738}
!27 = !{i64 4195749}
!28 = !{i64 4195760}
!29 = !{i64 4195809}
!30 = !{i64 4195812}
!31 = !{i64 4195845}
!32 = !{i64 4195804}
!33 = !{i64 4195860}
!34 = !{i64 4195785}
!35 = !{i64 4195879}
!36 = !{i64 4195905}
!37 = !{i64 4195928}
!38 = !{i64 4195949}
!39 = !{i64 4195959}
