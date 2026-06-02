source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_402fe0 = local_unnamed_addr global i64 0
@global_var_4011ba = constant [15 x i8] c"checksum = %X\0A\00"
@global_var_403020 = local_unnamed_addr global i8 0
@0 = internal constant [2 x i8] c"1\00"
@1 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @0, i64 0, i64 0)
@global_var_403030 = global i32* null
@global_var_4011b8 = constant [2 x i8] c"1\00"

define i64 @codemarker_alpha(i32 %arg1) local_unnamed_addr {
dec_label_pc_400480:
  %0 = zext i32 %arg1 to i64, !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_4004a0:
  %stack_var_-28.0.reg2mem = alloca i32, !insn.addr !2
  %0 = trunc i64 %argc to i32, !insn.addr !3
  %1 = call i64 @codemarker_alpha(i32 0), !insn.addr !4
  %2 = call i64 @codemarker_alpha(i32 1), !insn.addr !5
  %3 = icmp eq i32 %0, 2, !insn.addr !6
  %4 = icmp eq i1 %3, false, !insn.addr !7
  store i32 0, i32* %stack_var_-28.0.reg2mem, !insn.addr !7
  br i1 %4, label %dec_label_pc_4004f2, label %dec_label_pc_4004d4, !insn.addr !7

dec_label_pc_4004d4:                              ; preds = %dec_label_pc_4004a0
  %5 = ptrtoint i8** %argv to i64, !insn.addr !8
  %6 = add i64 %5, 8, !insn.addr !9
  %7 = inttoptr i64 %6 to i64*, !insn.addr !9
  %8 = load i64, i64* %7, align 8, !insn.addr !9
  %9 = inttoptr i64 %8 to i8*, !insn.addr !10
  %10 = call i32 @strcmp(i8* %9, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_4011b8, i64 0, i64 0)), !insn.addr !10
  %11 = icmp eq i32 %10, 0, !insn.addr !11
  %spec.select = zext i1 %11 to i32
  store i32 %spec.select, i32* %stack_var_-28.0.reg2mem
  br label %dec_label_pc_4004f2

dec_label_pc_4004f2:                              ; preds = %dec_label_pc_4004d4, %dec_label_pc_4004a0
  %stack_var_-28.0.reload = load i32, i32* %stack_var_-28.0.reg2mem
  %12 = call i64 @codemarker_alpha(i32 2), !insn.addr !12
  %13 = call i64 @platform_main_begin(), !insn.addr !13
  %14 = call i64 @codemarker_alpha(i32 3), !insn.addr !14
  %15 = call i64 @crc32_gentab(), !insn.addr !15
  %16 = call i64 @func_1(), !insn.addr !16
  %17 = load i32, i32* inttoptr (i64 4206612 to i32*), align 4, !insn.addr !17
  %18 = sub i32 0, %17
  %19 = sub i32 %18, 1
  %20 = zext i32 %19 to i64, !insn.addr !18
  %21 = call i64 @platform_main_end(i64 %20, i32 %stack_var_-28.0.reload), !insn.addr !19
  ret i64 0, !insn.addr !20

; uselistorder directives
  uselistorder i64 (i32)* @codemarker_alpha, { 3, 2, 1, 0 }
}

define i64 @platform_main_begin() local_unnamed_addr {
dec_label_pc_400540:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !21
}

define i64 @crc32_gentab() local_unnamed_addr {
dec_label_pc_400550:
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !22
  %storemerge4.reg2mem = alloca i32, !insn.addr !22
  %indvars.iv.reg2mem = alloca i64, !insn.addr !22
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400578.preheader

dec_label_pc_400578.preheader:                    ; preds = %dec_label_pc_400550, %dec_label_pc_4005ad
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %0 = trunc i64 %indvars.iv.reload to i32
  store i32 8, i32* %storemerge4.reg2mem
  store i32 %0, i32* %stack_var_-12.03.reg2mem
  br label %dec_label_pc_40057e

dec_label_pc_40057e:                              ; preds = %dec_label_pc_400578.preheader, %dec_label_pc_40057e
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = urem i32 %stack_var_-12.03.reload, 2, !insn.addr !23
  %2 = icmp eq i32 %1, 0, !insn.addr !24
  %3 = udiv i32 %stack_var_-12.03.reload, 2
  %4 = xor i32 %3, -306674912
  %storemerge1 = select i1 %2, i32 %3, i32 %4
  %5 = add nsw i32 %storemerge4.reload, -1, !insn.addr !25
  %6 = icmp eq i32 %5, 0, !insn.addr !26
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !26
  store i32 %storemerge1, i32* %stack_var_-12.03.reg2mem, !insn.addr !26
  br i1 %6, label %dec_label_pc_4005ad, label %dec_label_pc_40057e, !insn.addr !26

dec_label_pc_4005ad:                              ; preds = %dec_label_pc_40057e
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !27
  %8 = add i64 %7, ptrtoint (i32** @global_var_403030 to i64), !insn.addr !27
  %9 = inttoptr i64 %8 to i32*, !insn.addr !27
  store i32 %storemerge1, i32* %9, align 4, !insn.addr !27
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 256
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !28
  br i1 %exitcond, label %dec_label_pc_4005c6, label %dec_label_pc_400578.preheader, !insn.addr !28

dec_label_pc_4005c6:                              ; preds = %dec_label_pc_4005ad
  ret i64 256, !insn.addr !29

; uselistorder directives
  uselistorder i32 %storemerge1, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %stack_var_-12.03.reload, { 1, 0 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 1, 0, 2 }
  uselistorder i32 0, { 2, 4, 1, 5, 0, 3 }
  uselistorder i32 2, { 0, 1, 3, 2 }
  uselistorder i32 1, { 3, 2, 1, 0, 5, 6, 4 }
  uselistorder label %dec_label_pc_40057e, { 1, 0 }
  uselistorder label %dec_label_pc_400578.preheader, { 1, 0 }
}

define i64 @func_1() local_unnamed_addr {
dec_label_pc_4005d0:
  ret i64 4, !insn.addr !30

; uselistorder directives
  uselistorder i64 4, { 1, 0 }
}

define i64 @platform_main_end(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_4005f0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !31
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_4011ba, i64 0, i64 0), i32 %0), !insn.addr !32
  %2 = sext i32 %1 to i64, !insn.addr !32
  ret i64 %2, !insn.addr !33

; uselistorder directives
  uselistorder i64 0, { 6, 7, 0, 1, 2, 3, 4, 5, 8 }
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

!0 = !{i64 4195469}
!1 = !{i64 4195473}
!2 = !{i64 4195488}
!3 = !{i64 4195503}
!4 = !{i64 4195512}
!5 = !{i64 4195529}
!6 = !{i64 4195534}
!7 = !{i64 4195538}
!8 = !{i64 4195540}
!9 = !{i64 4195544}
!10 = !{i64 4195553}
!11 = !{i64 4195558}
!12 = !{i64 4195575}
!13 = !{i64 4195580}
!14 = !{i64 4195590}
!15 = !{i64 4195595}
!16 = !{i64 4195600}
!17 = !{i64 4195605}
!18 = !{i64 4195625}
!19 = !{i64 4195630}
!20 = !{i64 4195642}
!21 = !{i64 4195653}
!22 = !{i64 4195664}
!23 = !{i64 4195713}
!24 = !{i64 4195716}
!25 = !{i64 4195749}
!26 = !{i64 4195708}
!27 = !{i64 4195764}
!28 = !{i64 4195689}
!29 = !{i64 4195783}
!30 = !{i64 4195809}
!31 = !{i64 4195832}
!32 = !{i64 4195853}
!33 = !{i64 4195863}
