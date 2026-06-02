source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_402fe0 = local_unnamed_addr global i64 0
@global_var_4011ba = constant [10 x i8] c"g_2[i].f0\00"
@global_var_4011c4 = constant [14 x i8] c"index = [%d]\0A\00"
@global_var_4011d2 = constant [36 x i8] c"...checksum after hashing %s : %lX\0A\00"
@global_var_4011f6 = constant [15 x i8] c"checksum = %X\0A\00"
@global_var_403060 = local_unnamed_addr global i8 0
@0 = internal constant [2 x i8] c"1\00"
@1 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @0, i64 0, i64 0)
@2 = internal constant [2 x i8] c"\B3\00"
@global_var_403030 = global i8* getelementptr inbounds ([2 x i8], [2 x i8]* @2, i64 0, i64 0)
@global_var_403020 = local_unnamed_addr global i32 -1
@global_var_403070 = global i32* null
@global_var_4011b8 = constant [2 x i8] c"1\00"

define i64 @codemarker_alpha(i32 %arg1) local_unnamed_addr {
dec_label_pc_400480:
  %0 = zext i32 %arg1 to i64, !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_4004a0:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !2
  %stack_var_-32.0.reg2mem = alloca i32, !insn.addr !2
  %0 = trunc i64 %argc to i32, !insn.addr !3
  %1 = call i64 @codemarker_alpha(i32 0), !insn.addr !4
  %2 = call i64 @codemarker_alpha(i32 1), !insn.addr !5
  %3 = call i64 @codemarker_alpha(i32 2), !insn.addr !6
  %4 = icmp eq i32 %0, 2, !insn.addr !7
  %5 = icmp eq i1 %4, false, !insn.addr !8
  store i32 0, i32* %stack_var_-32.0.reg2mem, !insn.addr !8
  br i1 %5, label %dec_label_pc_4004fc, label %dec_label_pc_4004de, !insn.addr !8

dec_label_pc_4004de:                              ; preds = %dec_label_pc_4004a0
  %6 = ptrtoint i8** %argv to i64, !insn.addr !9
  %7 = add i64 %6, 8, !insn.addr !10
  %8 = inttoptr i64 %7 to i64*, !insn.addr !10
  %9 = load i64, i64* %8, align 8, !insn.addr !10
  %10 = inttoptr i64 %9 to i8*, !insn.addr !11
  %11 = call i32 @strcmp(i8* %10, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_4011b8, i64 0, i64 0)), !insn.addr !11
  %12 = icmp eq i32 %11, 0, !insn.addr !12
  %spec.select = zext i1 %12 to i32
  store i32 %spec.select, i32* %stack_var_-32.0.reg2mem
  br label %dec_label_pc_4004fc

dec_label_pc_4004fc:                              ; preds = %dec_label_pc_4004de, %dec_label_pc_4004a0
  %stack_var_-32.0.reload = load i32, i32* %stack_var_-32.0.reg2mem
  %13 = call i64 @codemarker_alpha(i32 3), !insn.addr !13
  %14 = call i64 @platform_main_begin(), !insn.addr !14
  %15 = call i64 @codemarker_alpha(i32 4), !insn.addr !15
  %16 = call i64 @crc32_gentab(), !insn.addr !16
  %17 = call i64 @codemarker_alpha(i32 5), !insn.addr !17
  %18 = call i64 @func_1(), !insn.addr !18
  %19 = call i64 @codemarker_alpha(i32 6), !insn.addr !19
  %20 = icmp eq i32 %stack_var_-32.0.reload, 0
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400544

dec_label_pc_400544:                              ; preds = %dec_label_pc_4004fc, %dec_label_pc_400593
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %21 = mul i64 %indvars.iv.reload, 8, !insn.addr !20
  %22 = add i64 %21, ptrtoint (i8** @global_var_403030 to i64), !insn.addr !20
  %23 = inttoptr i64 %22 to i8*, !insn.addr !20
  %24 = load i8, i8* %23, align 8, !insn.addr !20
  %25 = call i64 @transparent_crc(i8 %24, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_4011ba, i64 0, i64 0), i32 %stack_var_-32.0.reload), !insn.addr !21
  %26 = call i64 @codemarker_alpha(i32 7), !insn.addr !22
  br i1 %20, label %dec_label_pc_400593, label %dec_label_pc_400573, !insn.addr !23

dec_label_pc_400573:                              ; preds = %dec_label_pc_400544
  %27 = call i64 @codemarker_alpha(i32 8), !insn.addr !24
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_4011c4, i64 0, i64 0), i64 %indvars.iv.reload), !insn.addr !25
  br label %dec_label_pc_400593, !insn.addr !25

dec_label_pc_400593:                              ; preds = %dec_label_pc_400544, %dec_label_pc_400573
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 6
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !26
  br i1 %exitcond, label %dec_label_pc_40059e, label %dec_label_pc_400544, !insn.addr !26

dec_label_pc_40059e:                              ; preds = %dec_label_pc_400593
  %29 = load i32, i32* @global_var_403020, align 4, !insn.addr !27
  %30 = sub i32 0, %29
  %31 = sub i32 %30, 1
  %32 = zext i32 %31 to i64, !insn.addr !28
  %33 = call i64 @platform_main_end(i64 %32, i32 %stack_var_-32.0.reload), !insn.addr !29
  ret i64 0, !insn.addr !30

; uselistorder directives
  uselistorder i32 %stack_var_-32.0.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 (i32)* @codemarker_alpha, { 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_400593, { 1, 0 }
  uselistorder label %dec_label_pc_400544, { 1, 0 }
}

define i64 @platform_main_begin() local_unnamed_addr {
dec_label_pc_4005d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !31
}

define i64 @crc32_gentab() local_unnamed_addr {
dec_label_pc_4005e0:
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !32
  %storemerge4.reg2mem = alloca i32, !insn.addr !32
  %indvars.iv.reg2mem = alloca i64, !insn.addr !32
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400608.preheader

dec_label_pc_400608.preheader:                    ; preds = %dec_label_pc_4005e0, %dec_label_pc_40063d
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %0 = trunc i64 %indvars.iv.reload to i32
  store i32 8, i32* %storemerge4.reg2mem
  store i32 %0, i32* %stack_var_-12.03.reg2mem
  br label %dec_label_pc_40060e

dec_label_pc_40060e:                              ; preds = %dec_label_pc_400608.preheader, %dec_label_pc_40060e
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = urem i32 %stack_var_-12.03.reload, 2, !insn.addr !33
  %2 = icmp eq i32 %1, 0, !insn.addr !34
  %3 = udiv i32 %stack_var_-12.03.reload, 2
  %4 = xor i32 %3, -306674912
  %storemerge1 = select i1 %2, i32 %3, i32 %4
  %5 = add nsw i32 %storemerge4.reload, -1, !insn.addr !35
  %6 = icmp eq i32 %5, 0, !insn.addr !36
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !36
  store i32 %storemerge1, i32* %stack_var_-12.03.reg2mem, !insn.addr !36
  br i1 %6, label %dec_label_pc_40063d, label %dec_label_pc_40060e, !insn.addr !36

dec_label_pc_40063d:                              ; preds = %dec_label_pc_40060e
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !37
  %8 = add i64 %7, ptrtoint (i32** @global_var_403070 to i64), !insn.addr !37
  %9 = inttoptr i64 %8 to i32*, !insn.addr !37
  store i32 %storemerge1, i32* %9, align 4, !insn.addr !37
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 256
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !38
  br i1 %exitcond, label %dec_label_pc_400656, label %dec_label_pc_400608.preheader, !insn.addr !38

dec_label_pc_400656:                              ; preds = %dec_label_pc_40063d
  ret i64 256, !insn.addr !39

; uselistorder directives
  uselistorder i32 %storemerge1, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %stack_var_-12.03.reload, { 1, 0 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_40060e, { 1, 0 }
  uselistorder label %dec_label_pc_400608.preheader, { 1, 0 }
}

define i64 @func_1() local_unnamed_addr {
dec_label_pc_400660:
  %0 = load i8*, i8** @global_var_403030, align 8, !insn.addr !40
  %1 = ptrtoint i8* %0 to i64, !insn.addr !40
  ret i64 %1, !insn.addr !41

; uselistorder directives
  uselistorder i8** @global_var_403030, { 1, 0 }
}

define i64 @transparent_crc(i8 %arg1, i8* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_400680:
  %rax.0.reg2mem = alloca i64, !insn.addr !42
  %0 = sext i8 %arg1 to i64
  %1 = call i64 @crc32_8bytes(i64 %0), !insn.addr !43
  %2 = icmp eq i32 %arg3, 0, !insn.addr !44
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !45
  br i1 %2, label %dec_label_pc_4006cd, label %dec_label_pc_4006a2, !insn.addr !45

dec_label_pc_4006a2:                              ; preds = %dec_label_pc_400680
  %3 = load i32, i32* @global_var_403020, align 4, !insn.addr !46
  %4 = sub i32 0, %3
  %5 = sub i32 %4, 1
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_4011d2, i64 0, i64 0), i8* %arg2, i32 %5), !insn.addr !47
  %7 = sext i32 %6 to i64, !insn.addr !47
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !47
  br label %dec_label_pc_4006cd, !insn.addr !47

dec_label_pc_4006cd:                              ; preds = %dec_label_pc_4006a2, %dec_label_pc_400680
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !48

; uselistorder directives
  uselistorder i32 0, { 1, 5, 3, 6, 2, 7, 8, 0, 4 }
  uselistorder i32 1, { 7, 1, 4, 3, 2, 0, 8, 9, 6, 5 }
}

define i64 @platform_main_end(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_4006e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !49
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_4011f6, i64 0, i64 0), i32 %0), !insn.addr !50
  %2 = sext i32 %1 to i64, !insn.addr !50
  ret i64 %2, !insn.addr !51

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 1, 0, 2 }
  uselistorder i64 0, { 9, 10, 11, 12, 0, 2, 13, 14, 15, 16, 1, 3, 4, 5, 6, 7, 8, 17 }
}

define i64 @crc32_8bytes(i64 %arg1) local_unnamed_addr {
dec_label_pc_400710:
  %0 = urem i64 %arg1, 256, !insn.addr !52
  %1 = call i64 @crc32_byte(i64 %0), !insn.addr !53
  %2 = udiv i64 %arg1, 256, !insn.addr !54
  %3 = urem i64 %2, 256, !insn.addr !55
  %4 = call i64 @crc32_byte(i64 %3), !insn.addr !56
  %5 = udiv i64 %arg1, 65536, !insn.addr !57
  %6 = urem i64 %5, 256, !insn.addr !58
  %7 = call i64 @crc32_byte(i64 %6), !insn.addr !59
  %8 = udiv i64 %arg1, 16777216, !insn.addr !60
  %9 = urem i64 %8, 256, !insn.addr !61
  %10 = call i64 @crc32_byte(i64 %9), !insn.addr !62
  %11 = udiv i64 %arg1, 4294967296, !insn.addr !63
  %12 = urem i64 %11, 256, !insn.addr !64
  %13 = call i64 @crc32_byte(i64 %12), !insn.addr !65
  %14 = udiv i64 %arg1, 1099511627776, !insn.addr !66
  %15 = urem i64 %14, 256, !insn.addr !67
  %16 = call i64 @crc32_byte(i64 %15), !insn.addr !68
  %17 = udiv i64 %arg1, 281474976710656, !insn.addr !69
  %18 = urem i64 %17, 256, !insn.addr !70
  %19 = call i64 @crc32_byte(i64 %18), !insn.addr !71
  %20 = udiv i64 %arg1, 72057594037927936, !insn.addr !72
  %21 = call i64 @crc32_byte(i64 %20), !insn.addr !73
  ret i64 %21, !insn.addr !74

; uselistorder directives
  uselistorder i64 (i64)* @crc32_byte, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 256, { 2, 3, 4, 5, 6, 7, 1, 8, 0, 9 }
}

define i64 @crc32_byte(i64 %arg1) local_unnamed_addr {
dec_label_pc_4007e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !75
  %1 = load i32, i32* @global_var_403020, align 4
  %2 = udiv i32 %1, 256, !insn.addr !76
  %3 = xor i32 %1, %0, !insn.addr !77
  %4 = mul i32 %3, 4, !insn.addr !78
  %5 = and i32 %4, 1020
  %6 = zext i32 %5 to i64, !insn.addr !79
  %7 = add i64 %6, ptrtoint (i32** @global_var_403070 to i64), !insn.addr !79
  %8 = inttoptr i64 %7 to i32*, !insn.addr !79
  %9 = load i32, i32* %8, align 4, !insn.addr !79
  %10 = xor i32 %2, %9, !insn.addr !79
  %11 = zext i32 %10 to i64, !insn.addr !79
  store i32 %10, i32* @global_var_403020, align 4, !insn.addr !80
  ret i64 %11, !insn.addr !81

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder i32* @global_var_403020, { 3, 2, 1, 0 }
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

!0 = !{i64 4195469}
!1 = !{i64 4195473}
!2 = !{i64 4195488}
!3 = !{i64 4195503}
!4 = !{i64 4195512}
!5 = !{i64 4195522}
!6 = !{i64 4195539}
!7 = !{i64 4195544}
!8 = !{i64 4195548}
!9 = !{i64 4195550}
!10 = !{i64 4195554}
!11 = !{i64 4195563}
!12 = !{i64 4195568}
!13 = !{i64 4195585}
!14 = !{i64 4195590}
!15 = !{i64 4195600}
!16 = !{i64 4195605}
!17 = !{i64 4195615}
!18 = !{i64 4195620}
!19 = !{i64 4195634}
!20 = !{i64 4195656}
!21 = !{i64 4195678}
!22 = !{i64 4195688}
!23 = !{i64 4195697}
!24 = !{i64 4195704}
!25 = !{i64 4195724}
!26 = !{i64 4195650}
!27 = !{i64 4195742}
!28 = !{i64 4195762}
!29 = !{i64 4195767}
!30 = !{i64 4195779}
!31 = !{i64 4195797}
!32 = !{i64 4195808}
!33 = !{i64 4195857}
!34 = !{i64 4195860}
!35 = !{i64 4195893}
!36 = !{i64 4195852}
!37 = !{i64 4195908}
!38 = !{i64 4195833}
!39 = !{i64 4195927}
!40 = !{i64 4195940}
!41 = !{i64 4195957}
!42 = !{i64 4195968}
!43 = !{i64 4195991}
!44 = !{i64 4195996}
!45 = !{i64 4196000}
!46 = !{i64 4196006}
!47 = !{i64 4196040}
!48 = !{i64 4196050}
!49 = !{i64 4196072}
!50 = !{i64 4196093}
!51 = !{i64 4196103}
!52 = !{i64 4196138}
!53 = !{i64 4196141}
!54 = !{i64 4196150}
!55 = !{i64 4196160}
!56 = !{i64 4196163}
!57 = !{i64 4196172}
!58 = !{i64 4196182}
!59 = !{i64 4196185}
!60 = !{i64 4196194}
!61 = !{i64 4196204}
!62 = !{i64 4196207}
!63 = !{i64 4196216}
!64 = !{i64 4196226}
!65 = !{i64 4196229}
!66 = !{i64 4196238}
!67 = !{i64 4196248}
!68 = !{i64 4196251}
!69 = !{i64 4196260}
!70 = !{i64 4196270}
!71 = !{i64 4196273}
!72 = !{i64 4196282}
!73 = !{i64 4196295}
!74 = !{i64 4196305}
!75 = !{i64 4196327}
!76 = !{i64 4196337}
!77 = !{i64 4196356}
!78 = !{i64 4196358}
!79 = !{i64 4196366}
!80 = !{i64 4196373}
!81 = !{i64 4196381}
