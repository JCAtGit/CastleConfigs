source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_402fe0 = local_unnamed_addr global i64 0
@global_var_4011ba = constant [4 x i8] c"g_4\00"
@global_var_4011be = constant [36 x i8] c"...checksum after hashing %s : %lX\0A\00"
@global_var_4011e2 = constant [15 x i8] c"checksum = %X\0A\00"
@global_var_403060 = local_unnamed_addr global i8 0
@0 = internal constant [2 x i8] c"1\00"
@1 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @0, i64 0, i64 0)
@global_var_403020 = global i32 1561780005
@global_var_403024 = local_unnamed_addr global i32 -1
@global_var_403070 = global i32* null
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

define i64 @mage_alpha4(i64 %arg1) local_unnamed_addr {
dec_label_pc_400500:
  %0 = and i64 %arg1, 4294967295, !insn.addr !8
  ret i64 %0, !insn.addr !9
}

define i64 @mage_alpha5(i64 %arg1) local_unnamed_addr {
dec_label_pc_400520:
  %0 = and i64 %arg1, 4294967295, !insn.addr !10
  ret i64 %0, !insn.addr !11
}

define i64 @mage_alpha6(i64 %arg1) local_unnamed_addr {
dec_label_pc_400540:
  %0 = and i64 %arg1, 4294967295, !insn.addr !12
  ret i64 %0, !insn.addr !13
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_400560:
  %stack_var_-32.0.reg2mem = alloca i32, !insn.addr !14
  %0 = trunc i64 %argc to i32, !insn.addr !15
  %1 = call i64 @mage_alpha2(i64 2), !insn.addr !16
  %2 = call i64 @mage_alpha3(i64 3), !insn.addr !17
  %3 = call i64 @mage_alpha4(i64 4), !insn.addr !18
  %4 = icmp eq i32 %0, 2, !insn.addr !19
  %5 = icmp eq i1 %4, false, !insn.addr !20
  store i32 0, i32* %stack_var_-32.0.reg2mem, !insn.addr !20
  br i1 %5, label %dec_label_pc_4005bf, label %dec_label_pc_4005a1, !insn.addr !20

dec_label_pc_4005a1:                              ; preds = %dec_label_pc_400560
  %6 = ptrtoint i8** %argv to i64, !insn.addr !21
  %7 = add i64 %6, 8, !insn.addr !22
  %8 = inttoptr i64 %7 to i64*, !insn.addr !22
  %9 = load i64, i64* %8, align 8, !insn.addr !22
  %10 = inttoptr i64 %9 to i8*, !insn.addr !23
  %11 = call i32 @strcmp(i8* %10, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_4011b8, i64 0, i64 0)), !insn.addr !23
  %12 = icmp eq i32 %11, 0, !insn.addr !24
  %spec.select = zext i1 %12 to i32
  store i32 %spec.select, i32* %stack_var_-32.0.reg2mem
  br label %dec_label_pc_4005bf

dec_label_pc_4005bf:                              ; preds = %dec_label_pc_4005a1, %dec_label_pc_400560
  %stack_var_-32.0.reload = load i32, i32* %stack_var_-32.0.reg2mem
  %13 = call i64 @mage_alpha5(i64 5), !insn.addr !25
  %14 = call i64 @platform_main_begin(), !insn.addr !26
  %15 = call i64 @mage_alpha6(i64 6), !insn.addr !27
  %16 = call i64 @crc32_gentab(), !insn.addr !28
  %17 = call i64 @func_1(i64 6), !insn.addr !29
  %18 = load i32, i32* @global_var_403020, align 4, !insn.addr !30
  %19 = call i64 @transparent_crc(i32 %18, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4011ba, i64 0, i64 0), i32 %stack_var_-32.0.reload), !insn.addr !31
  %20 = load i32, i32* @global_var_403024, align 4, !insn.addr !32
  %21 = sub i32 0, %20
  %22 = sub i32 %21, 1
  %23 = zext i32 %22 to i64, !insn.addr !33
  %24 = call i64 @platform_main_end(i64 %23, i32 %stack_var_-32.0.reload), !insn.addr !34
  ret i64 0, !insn.addr !35
}

define i64 @platform_main_begin() local_unnamed_addr {
dec_label_pc_400630:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !36
}

define i64 @crc32_gentab() local_unnamed_addr {
dec_label_pc_400640:
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !37
  %storemerge4.reg2mem = alloca i32, !insn.addr !37
  %indvars.iv.reg2mem = alloca i64, !insn.addr !37
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400668.preheader

dec_label_pc_400668.preheader:                    ; preds = %dec_label_pc_400640, %dec_label_pc_40069d
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %0 = trunc i64 %indvars.iv.reload to i32
  store i32 8, i32* %storemerge4.reg2mem
  store i32 %0, i32* %stack_var_-12.03.reg2mem
  br label %dec_label_pc_40066e

dec_label_pc_40066e:                              ; preds = %dec_label_pc_400668.preheader, %dec_label_pc_40066e
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = urem i32 %stack_var_-12.03.reload, 2, !insn.addr !38
  %2 = icmp eq i32 %1, 0, !insn.addr !39
  %3 = udiv i32 %stack_var_-12.03.reload, 2
  %4 = xor i32 %3, -306674912
  %storemerge1 = select i1 %2, i32 %3, i32 %4
  %5 = add nsw i32 %storemerge4.reload, -1, !insn.addr !40
  %6 = icmp eq i32 %5, 0, !insn.addr !41
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !41
  store i32 %storemerge1, i32* %stack_var_-12.03.reg2mem, !insn.addr !41
  br i1 %6, label %dec_label_pc_40069d, label %dec_label_pc_40066e, !insn.addr !41

dec_label_pc_40069d:                              ; preds = %dec_label_pc_40066e
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !42
  %8 = add i64 %7, ptrtoint (i32** @global_var_403070 to i64), !insn.addr !42
  %9 = inttoptr i64 %8 to i32*, !insn.addr !42
  store i32 %storemerge1, i32* %9, align 4, !insn.addr !42
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 256
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !43
  br i1 %exitcond, label %dec_label_pc_4006b6, label %dec_label_pc_400668.preheader, !insn.addr !43

dec_label_pc_4006b6:                              ; preds = %dec_label_pc_40069d
  ret i64 256, !insn.addr !44

; uselistorder directives
  uselistorder i32 %storemerge1, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %stack_var_-12.03.reload, { 1, 0 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_40066e, { 1, 0 }
  uselistorder label %dec_label_pc_400668.preheader, { 1, 0 }
}

define i64 @func_1(i64 %arg1) local_unnamed_addr {
dec_label_pc_4006c0:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !45
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !46
  %1 = call i64 @mage_alpha0(i32 0), !insn.addr !47
  %2 = call i64 @mage_alpha1(i64 1), !insn.addr !48
  %3 = add i64 %0, -48, !insn.addr !49
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400b57

dec_label_pc_400b57:                              ; preds = %dec_label_pc_4006c0, %dec_label_pc_400b57
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = mul i64 %indvars.iv.reload, 8, !insn.addr !49
  %5 = add i64 %3, %4, !insn.addr !49
  %6 = inttoptr i64 %5 to i64*, !insn.addr !49
  store i64 ptrtoint (i32* @global_var_403020 to i64), i64* %6, align 8, !insn.addr !49
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 6
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !50
  br i1 %exitcond, label %dec_label_pc_400b7e, label %dec_label_pc_400b57, !insn.addr !50

dec_label_pc_400b7e:                              ; preds = %dec_label_pc_400b57
  store i64 0, i64* inttoptr (i64 4206672 to i64*), align 16, !insn.addr !51
  %7 = load i32, i32* @global_var_403020, align 4, !insn.addr !52
  %8 = zext i32 %7 to i64, !insn.addr !52
  ret i64 %8, !insn.addr !53

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 6, { 0, 2, 1 }
  uselistorder i32* @global_var_403020, { 1, 2, 0 }
  uselistorder i64 1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_400b57, { 1, 0 }
}

define i64 @transparent_crc(i32 %arg1, i8* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_400ba0:
  %rax.0.reg2mem = alloca i64, !insn.addr !54
  %0 = sext i32 %arg1 to i64
  %1 = call i64 @crc32_8bytes(i64 %0), !insn.addr !55
  %2 = icmp eq i32 %arg3, 0, !insn.addr !56
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !57
  br i1 %2, label %dec_label_pc_400bed, label %dec_label_pc_400bc2, !insn.addr !57

dec_label_pc_400bc2:                              ; preds = %dec_label_pc_400ba0
  %3 = load i32, i32* @global_var_403024, align 4, !insn.addr !58
  %4 = sub i32 0, %3
  %5 = sub i32 %4, 1
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_4011be, i64 0, i64 0), i8* %arg2, i32 %5), !insn.addr !59
  %7 = sext i32 %6 to i64, !insn.addr !59
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !59
  br label %dec_label_pc_400bed, !insn.addr !59

dec_label_pc_400bed:                              ; preds = %dec_label_pc_400bc2, %dec_label_pc_400ba0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !60

; uselistorder directives
  uselistorder i32 0, { 1, 5, 4, 3, 6, 2, 7, 0 }
  uselistorder i32 1, { 7, 1, 9, 2, 5, 4, 3, 0, 8, 6 }
}

define i64 @platform_main_end(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_400c00:
  %0 = trunc i64 %arg1 to i32, !insn.addr !61
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_4011e2, i64 0, i64 0), i32 %0), !insn.addr !62
  %2 = sext i32 %1 to i64, !insn.addr !62
  ret i64 %2, !insn.addr !63

; uselistorder directives
  uselistorder i64 0, { 7, 8, 9, 10, 14, 0, 1, 2, 11, 12, 3, 4, 5, 6, 13 }
}

define i64 @crc32_8bytes(i64 %arg1) local_unnamed_addr {
dec_label_pc_400c30:
  %0 = urem i64 %arg1, 256, !insn.addr !64
  %1 = call i64 @crc32_byte(i64 %0), !insn.addr !65
  %2 = udiv i64 %arg1, 256, !insn.addr !66
  %3 = urem i64 %2, 256, !insn.addr !67
  %4 = call i64 @crc32_byte(i64 %3), !insn.addr !68
  %5 = udiv i64 %arg1, 65536, !insn.addr !69
  %6 = urem i64 %5, 256, !insn.addr !70
  %7 = call i64 @crc32_byte(i64 %6), !insn.addr !71
  %8 = udiv i64 %arg1, 16777216, !insn.addr !72
  %9 = urem i64 %8, 256, !insn.addr !73
  %10 = call i64 @crc32_byte(i64 %9), !insn.addr !74
  %11 = udiv i64 %arg1, 4294967296, !insn.addr !75
  %12 = urem i64 %11, 256, !insn.addr !76
  %13 = call i64 @crc32_byte(i64 %12), !insn.addr !77
  %14 = udiv i64 %arg1, 1099511627776, !insn.addr !78
  %15 = urem i64 %14, 256, !insn.addr !79
  %16 = call i64 @crc32_byte(i64 %15), !insn.addr !80
  %17 = udiv i64 %arg1, 281474976710656, !insn.addr !81
  %18 = urem i64 %17, 256, !insn.addr !82
  %19 = call i64 @crc32_byte(i64 %18), !insn.addr !83
  %20 = udiv i64 %arg1, 72057594037927936, !insn.addr !84
  %21 = call i64 @crc32_byte(i64 %20), !insn.addr !85
  ret i64 %21, !insn.addr !86

; uselistorder directives
  uselistorder i64 (i64)* @crc32_byte, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 256, { 2, 3, 4, 5, 6, 7, 1, 8, 0, 9 }
}

define i64 @crc32_byte(i64 %arg1) local_unnamed_addr {
dec_label_pc_400d00:
  %0 = trunc i64 %arg1 to i32, !insn.addr !87
  %1 = load i32, i32* @global_var_403024, align 4
  %2 = udiv i32 %1, 256, !insn.addr !88
  %3 = xor i32 %1, %0, !insn.addr !89
  %4 = mul i32 %3, 4, !insn.addr !90
  %5 = and i32 %4, 1020
  %6 = zext i32 %5 to i64, !insn.addr !91
  %7 = add i64 %6, ptrtoint (i32** @global_var_403070 to i64), !insn.addr !91
  %8 = inttoptr i64 %7 to i32*, !insn.addr !91
  %9 = load i32, i32* %8, align 4, !insn.addr !91
  %10 = xor i32 %2, %9, !insn.addr !91
  %11 = zext i32 %10 to i64, !insn.addr !91
  store i32 %10, i32* @global_var_403024, align 4, !insn.addr !92
  ret i64 %11, !insn.addr !93

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder i32* @global_var_403024, { 3, 2, 1, 0 }
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
!8 = !{i64 4195597}
!9 = !{i64 4195601}
!10 = !{i64 4195629}
!11 = !{i64 4195633}
!12 = !{i64 4195661}
!13 = !{i64 4195665}
!14 = !{i64 4195680}
!15 = !{i64 4195695}
!16 = !{i64 4195707}
!17 = !{i64 4195717}
!18 = !{i64 4195734}
!19 = !{i64 4195739}
!20 = !{i64 4195743}
!21 = !{i64 4195745}
!22 = !{i64 4195749}
!23 = !{i64 4195758}
!24 = !{i64 4195763}
!25 = !{i64 4195780}
!26 = !{i64 4195785}
!27 = !{i64 4195795}
!28 = !{i64 4195800}
!29 = !{i64 4195805}
!30 = !{i64 4195810}
!31 = !{i64 4195831}
!32 = !{i64 4195836}
!33 = !{i64 4195856}
!34 = !{i64 4195861}
!35 = !{i64 4195873}
!36 = !{i64 4195893}
!37 = !{i64 4195904}
!38 = !{i64 4195953}
!39 = !{i64 4195956}
!40 = !{i64 4195989}
!41 = !{i64 4195948}
!42 = !{i64 4196004}
!43 = !{i64 4195929}
!44 = !{i64 4196023}
!45 = !{i64 4196032}
!46 = !{i64 4196033}
!47 = !{i64 4197173}
!48 = !{i64 4197183}
!49 = !{i64 4197224}
!50 = !{i64 4197205}
!51 = !{i64 4197246}
!52 = !{i64 4197258}
!53 = !{i64 4197273}
!54 = !{i64 4197280}
!55 = !{i64 4197303}
!56 = !{i64 4197308}
!57 = !{i64 4197312}
!58 = !{i64 4197318}
!59 = !{i64 4197352}
!60 = !{i64 4197362}
!61 = !{i64 4197384}
!62 = !{i64 4197405}
!63 = !{i64 4197415}
!64 = !{i64 4197450}
!65 = !{i64 4197453}
!66 = !{i64 4197462}
!67 = !{i64 4197472}
!68 = !{i64 4197475}
!69 = !{i64 4197484}
!70 = !{i64 4197494}
!71 = !{i64 4197497}
!72 = !{i64 4197506}
!73 = !{i64 4197516}
!74 = !{i64 4197519}
!75 = !{i64 4197528}
!76 = !{i64 4197538}
!77 = !{i64 4197541}
!78 = !{i64 4197550}
!79 = !{i64 4197560}
!80 = !{i64 4197563}
!81 = !{i64 4197572}
!82 = !{i64 4197582}
!83 = !{i64 4197585}
!84 = !{i64 4197594}
!85 = !{i64 4197607}
!86 = !{i64 4197617}
!87 = !{i64 4197639}
!88 = !{i64 4197649}
!89 = !{i64 4197668}
!90 = !{i64 4197670}
!91 = !{i64 4197678}
!92 = !{i64 4197685}
!93 = !{i64 4197693}
