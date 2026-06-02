source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_402fe0 = local_unnamed_addr global i64 0
@global_var_4011ba = constant [4 x i8] c"g_5\00"
@global_var_4011be = constant [36 x i8] c"...checksum after hashing %s : %lX\0A\00"
@global_var_4011e2 = constant [15 x i8] c"checksum = %X\0A\00"
@global_var_403020 = local_unnamed_addr global i8 0
@0 = internal constant [2 x i8] c"1\00"
@1 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @0, i64 0, i64 0)
@global_var_403014 = local_unnamed_addr global i32 -1750818517
@global_var_403018 = local_unnamed_addr global i32 -1
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
  %17 = load i32, i32* @global_var_403014, align 4, !insn.addr !17
  %18 = call i64 @transparent_crc(i32 %17, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4011ba, i64 0, i64 0), i32 %stack_var_-28.0.reload), !insn.addr !18
  %19 = load i32, i32* inttoptr (i64 4206616 to i32*), align 8, !insn.addr !19
  %20 = sub i32 0, %19
  %21 = sub i32 %20, 1
  %22 = zext i32 %21 to i64, !insn.addr !20
  %23 = call i64 @platform_main_end(i64 %22, i32 %stack_var_-28.0.reload), !insn.addr !21
  ret i64 0, !insn.addr !22

; uselistorder directives
  uselistorder i64 (i32)* @codemarker_alpha, { 3, 2, 1, 0 }
}

define i64 @platform_main_begin() local_unnamed_addr {
dec_label_pc_400560:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !23
}

define i64 @crc32_gentab() local_unnamed_addr {
dec_label_pc_400570:
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !24
  %storemerge4.reg2mem = alloca i32, !insn.addr !24
  %indvars.iv.reg2mem = alloca i64, !insn.addr !24
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400598.preheader

dec_label_pc_400598.preheader:                    ; preds = %dec_label_pc_400570, %dec_label_pc_4005cd
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %0 = trunc i64 %indvars.iv.reload to i32
  store i32 8, i32* %storemerge4.reg2mem
  store i32 %0, i32* %stack_var_-12.03.reg2mem
  br label %dec_label_pc_40059e

dec_label_pc_40059e:                              ; preds = %dec_label_pc_400598.preheader, %dec_label_pc_40059e
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = urem i32 %stack_var_-12.03.reload, 2, !insn.addr !25
  %2 = icmp eq i32 %1, 0, !insn.addr !26
  %3 = udiv i32 %stack_var_-12.03.reload, 2
  %4 = xor i32 %3, -306674912
  %storemerge1 = select i1 %2, i32 %3, i32 %4
  %5 = add nsw i32 %storemerge4.reload, -1, !insn.addr !27
  %6 = icmp eq i32 %5, 0, !insn.addr !28
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !28
  store i32 %storemerge1, i32* %stack_var_-12.03.reg2mem, !insn.addr !28
  br i1 %6, label %dec_label_pc_4005cd, label %dec_label_pc_40059e, !insn.addr !28

dec_label_pc_4005cd:                              ; preds = %dec_label_pc_40059e
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !29
  %8 = add i64 %7, ptrtoint (i32** @global_var_403030 to i64), !insn.addr !29
  %9 = inttoptr i64 %8 to i32*, !insn.addr !29
  store i32 %storemerge1, i32* %9, align 4, !insn.addr !29
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 256
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !30
  br i1 %exitcond, label %dec_label_pc_4005e6, label %dec_label_pc_400598.preheader, !insn.addr !30

dec_label_pc_4005e6:                              ; preds = %dec_label_pc_4005cd
  ret i64 256, !insn.addr !31

; uselistorder directives
  uselistorder i32 %storemerge1, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %stack_var_-12.03.reload, { 1, 0 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 1, 0, 2 }
  uselistorder i32 2, { 0, 1, 3, 2 }
  uselistorder label %dec_label_pc_40059e, { 1, 0 }
  uselistorder label %dec_label_pc_400598.preheader, { 1, 0 }
}

define i64 @func_1() local_unnamed_addr {
dec_label_pc_4005f0:
  %0 = load i32, i32* @global_var_403014, align 4, !insn.addr !32
  %1 = sext i32 %0 to i64, !insn.addr !32
  ret i64 %1, !insn.addr !33

; uselistorder directives
  uselistorder i32* @global_var_403014, { 1, 0 }
}

define i64 @transparent_crc(i32 %arg1, i8* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_400620:
  %rax.0.reg2mem = alloca i64, !insn.addr !34
  %0 = sext i32 %arg1 to i64
  %1 = call i64 @crc32_8bytes(i64 %0), !insn.addr !35
  %2 = icmp eq i32 %arg3, 0, !insn.addr !36
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !37
  br i1 %2, label %dec_label_pc_40066d, label %dec_label_pc_400642, !insn.addr !37

dec_label_pc_400642:                              ; preds = %dec_label_pc_400620
  %3 = load i32, i32* @global_var_403018, align 4, !insn.addr !38
  %4 = sub i32 0, %3
  %5 = sub i32 %4, 1
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_4011be, i64 0, i64 0), i8* %arg2, i32 %5), !insn.addr !39
  %7 = sext i32 %6 to i64, !insn.addr !39
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !39
  br label %dec_label_pc_40066d, !insn.addr !39

dec_label_pc_40066d:                              ; preds = %dec_label_pc_400642, %dec_label_pc_400620
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !40

; uselistorder directives
  uselistorder i32 0, { 1, 5, 3, 6, 2, 7, 0, 4 }
  uselistorder i32 1, { 6, 1, 4, 3, 2, 0, 7, 8, 5 }
}

define i64 @platform_main_end(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_400680:
  %0 = trunc i64 %arg1 to i32, !insn.addr !41
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_4011e2, i64 0, i64 0), i32 %0), !insn.addr !42
  %2 = sext i32 %1 to i64, !insn.addr !42
  ret i64 %2, !insn.addr !43

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 1, 0 }
  uselistorder i64 0, { 6, 7, 8, 9, 0, 1, 10, 11, 2, 3, 4, 5, 12 }
}

define i64 @crc32_8bytes(i64 %arg1) local_unnamed_addr {
dec_label_pc_4006b0:
  %0 = urem i64 %arg1, 256, !insn.addr !44
  %1 = call i64 @crc32_byte(i64 %0), !insn.addr !45
  %2 = udiv i64 %arg1, 256, !insn.addr !46
  %3 = urem i64 %2, 256, !insn.addr !47
  %4 = call i64 @crc32_byte(i64 %3), !insn.addr !48
  %5 = udiv i64 %arg1, 65536, !insn.addr !49
  %6 = urem i64 %5, 256, !insn.addr !50
  %7 = call i64 @crc32_byte(i64 %6), !insn.addr !51
  %8 = udiv i64 %arg1, 16777216, !insn.addr !52
  %9 = urem i64 %8, 256, !insn.addr !53
  %10 = call i64 @crc32_byte(i64 %9), !insn.addr !54
  %11 = udiv i64 %arg1, 4294967296, !insn.addr !55
  %12 = urem i64 %11, 256, !insn.addr !56
  %13 = call i64 @crc32_byte(i64 %12), !insn.addr !57
  %14 = udiv i64 %arg1, 1099511627776, !insn.addr !58
  %15 = urem i64 %14, 256, !insn.addr !59
  %16 = call i64 @crc32_byte(i64 %15), !insn.addr !60
  %17 = udiv i64 %arg1, 281474976710656, !insn.addr !61
  %18 = urem i64 %17, 256, !insn.addr !62
  %19 = call i64 @crc32_byte(i64 %18), !insn.addr !63
  %20 = udiv i64 %arg1, 72057594037927936, !insn.addr !64
  %21 = call i64 @crc32_byte(i64 %20), !insn.addr !65
  ret i64 %21, !insn.addr !66

; uselistorder directives
  uselistorder i64 (i64)* @crc32_byte, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 256, { 2, 3, 4, 5, 6, 7, 1, 8, 0, 9 }
}

define i64 @crc32_byte(i64 %arg1) local_unnamed_addr {
dec_label_pc_400780:
  %0 = trunc i64 %arg1 to i32, !insn.addr !67
  %1 = load i32, i32* @global_var_403018, align 4
  %2 = udiv i32 %1, 256, !insn.addr !68
  %3 = xor i32 %1, %0, !insn.addr !69
  %4 = mul i32 %3, 4, !insn.addr !70
  %5 = and i32 %4, 1020
  %6 = zext i32 %5 to i64, !insn.addr !71
  %7 = add i64 %6, ptrtoint (i32** @global_var_403030 to i64), !insn.addr !71
  %8 = inttoptr i64 %7 to i32*, !insn.addr !71
  %9 = load i32, i32* %8, align 4, !insn.addr !71
  %10 = xor i32 %2, %9, !insn.addr !71
  %11 = zext i32 %10 to i64, !insn.addr !71
  store i32 %10, i32* @global_var_403018, align 4, !insn.addr !72
  ret i64 %11, !insn.addr !73

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder i32* @global_var_403018, { 2, 1, 0 }
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
!18 = !{i64 4195626}
!19 = !{i64 4195631}
!20 = !{i64 4195651}
!21 = !{i64 4195656}
!22 = !{i64 4195668}
!23 = !{i64 4195685}
!24 = !{i64 4195696}
!25 = !{i64 4195745}
!26 = !{i64 4195748}
!27 = !{i64 4195781}
!28 = !{i64 4195740}
!29 = !{i64 4195796}
!30 = !{i64 4195721}
!31 = !{i64 4195815}
!32 = !{i64 4195848}
!33 = !{i64 4195857}
!34 = !{i64 4195872}
!35 = !{i64 4195895}
!36 = !{i64 4195900}
!37 = !{i64 4195904}
!38 = !{i64 4195910}
!39 = !{i64 4195944}
!40 = !{i64 4195954}
!41 = !{i64 4195976}
!42 = !{i64 4195997}
!43 = !{i64 4196007}
!44 = !{i64 4196042}
!45 = !{i64 4196045}
!46 = !{i64 4196054}
!47 = !{i64 4196064}
!48 = !{i64 4196067}
!49 = !{i64 4196076}
!50 = !{i64 4196086}
!51 = !{i64 4196089}
!52 = !{i64 4196098}
!53 = !{i64 4196108}
!54 = !{i64 4196111}
!55 = !{i64 4196120}
!56 = !{i64 4196130}
!57 = !{i64 4196133}
!58 = !{i64 4196142}
!59 = !{i64 4196152}
!60 = !{i64 4196155}
!61 = !{i64 4196164}
!62 = !{i64 4196174}
!63 = !{i64 4196177}
!64 = !{i64 4196186}
!65 = !{i64 4196199}
!66 = !{i64 4196209}
!67 = !{i64 4196231}
!68 = !{i64 4196241}
!69 = !{i64 4196260}
!70 = !{i64 4196262}
!71 = !{i64 4196270}
!72 = !{i64 4196277}
!73 = !{i64 4196285}
