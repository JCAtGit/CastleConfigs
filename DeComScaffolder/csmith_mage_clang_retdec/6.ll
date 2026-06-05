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
  %17 = load i32, i32* @global_var_403014, align 4, !insn.addr !23
  %18 = call i64 @transparent_crc(i32 %17, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4011ba, i64 0, i64 0), i32 %stack_var_-28.0.reload), !insn.addr !24
  %19 = load i32, i32* inttoptr (i64 4206616 to i32*), align 8, !insn.addr !25
  %20 = sub i32 0, %19
  %21 = sub i32 %20, 1
  %22 = zext i32 %21 to i64, !insn.addr !26
  %23 = call i64 @platform_main_end(i64 %22, i32 %stack_var_-28.0.reload), !insn.addr !27
  ret i64 0, !insn.addr !28
}

define i64 @platform_main_begin() local_unnamed_addr {
dec_label_pc_4005c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !29
}

define i64 @crc32_gentab() local_unnamed_addr {
dec_label_pc_4005d0:
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !30
  %storemerge4.reg2mem = alloca i32, !insn.addr !30
  %indvars.iv.reg2mem = alloca i64, !insn.addr !30
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_4005f8.preheader

dec_label_pc_4005f8.preheader:                    ; preds = %dec_label_pc_4005d0, %dec_label_pc_40062d
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %0 = trunc i64 %indvars.iv.reload to i32
  store i32 8, i32* %storemerge4.reg2mem
  store i32 %0, i32* %stack_var_-12.03.reg2mem
  br label %dec_label_pc_4005fe

dec_label_pc_4005fe:                              ; preds = %dec_label_pc_4005f8.preheader, %dec_label_pc_4005fe
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = urem i32 %stack_var_-12.03.reload, 2, !insn.addr !31
  %2 = icmp eq i32 %1, 0, !insn.addr !32
  %3 = udiv i32 %stack_var_-12.03.reload, 2
  %4 = xor i32 %3, -306674912
  %storemerge1 = select i1 %2, i32 %3, i32 %4
  %5 = add nsw i32 %storemerge4.reload, -1, !insn.addr !33
  %6 = icmp eq i32 %5, 0, !insn.addr !34
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !34
  store i32 %storemerge1, i32* %stack_var_-12.03.reg2mem, !insn.addr !34
  br i1 %6, label %dec_label_pc_40062d, label %dec_label_pc_4005fe, !insn.addr !34

dec_label_pc_40062d:                              ; preds = %dec_label_pc_4005fe
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !35
  %8 = add i64 %7, ptrtoint (i32** @global_var_403030 to i64), !insn.addr !35
  %9 = inttoptr i64 %8 to i32*, !insn.addr !35
  store i32 %storemerge1, i32* %9, align 4, !insn.addr !35
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 256
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !36
  br i1 %exitcond, label %dec_label_pc_400646, label %dec_label_pc_4005f8.preheader, !insn.addr !36

dec_label_pc_400646:                              ; preds = %dec_label_pc_40062d
  ret i64 256, !insn.addr !37

; uselistorder directives
  uselistorder i32 %storemerge1, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %stack_var_-12.03.reload, { 1, 0 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_4005fe, { 1, 0 }
  uselistorder label %dec_label_pc_4005f8.preheader, { 1, 0 }
}

define i64 @func_1() local_unnamed_addr {
dec_label_pc_400650:
  %0 = load i32, i32* @global_var_403014, align 4, !insn.addr !38
  %1 = sext i32 %0 to i64, !insn.addr !38
  ret i64 %1, !insn.addr !39

; uselistorder directives
  uselistorder i32* @global_var_403014, { 1, 0 }
}

define i64 @transparent_crc(i32 %arg1, i8* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_400680:
  %rax.0.reg2mem = alloca i64, !insn.addr !40
  %0 = sext i32 %arg1 to i64
  %1 = call i64 @crc32_8bytes(i64 %0), !insn.addr !41
  %2 = icmp eq i32 %arg3, 0, !insn.addr !42
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !43
  br i1 %2, label %dec_label_pc_4006cd, label %dec_label_pc_4006a2, !insn.addr !43

dec_label_pc_4006a2:                              ; preds = %dec_label_pc_400680
  %3 = load i32, i32* @global_var_403018, align 4, !insn.addr !44
  %4 = sub i32 0, %3
  %5 = sub i32 %4, 1
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_4011be, i64 0, i64 0), i8* %arg2, i32 %5), !insn.addr !45
  %7 = sext i32 %6 to i64, !insn.addr !45
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !45
  br label %dec_label_pc_4006cd, !insn.addr !45

dec_label_pc_4006cd:                              ; preds = %dec_label_pc_4006a2, %dec_label_pc_400680
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !46

; uselistorder directives
  uselistorder i32 0, { 1, 5, 3, 6, 2, 7, 0, 4 }
  uselistorder i32 1, { 6, 1, 4, 3, 2, 0, 7, 5 }
}

define i64 @platform_main_end(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_4006e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !47
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_4011e2, i64 0, i64 0), i32 %0), !insn.addr !48
  %2 = sext i32 %1 to i64, !insn.addr !48
  ret i64 %2, !insn.addr !49

; uselistorder directives
  uselistorder i64 0, { 6, 7, 8, 9, 0, 1, 10, 11, 2, 3, 4, 5, 12 }
}

define i64 @crc32_8bytes(i64 %arg1) local_unnamed_addr {
dec_label_pc_400710:
  %0 = urem i64 %arg1, 256, !insn.addr !50
  %1 = call i64 @crc32_byte(i64 %0), !insn.addr !51
  %2 = udiv i64 %arg1, 256, !insn.addr !52
  %3 = urem i64 %2, 256, !insn.addr !53
  %4 = call i64 @crc32_byte(i64 %3), !insn.addr !54
  %5 = udiv i64 %arg1, 65536, !insn.addr !55
  %6 = urem i64 %5, 256, !insn.addr !56
  %7 = call i64 @crc32_byte(i64 %6), !insn.addr !57
  %8 = udiv i64 %arg1, 16777216, !insn.addr !58
  %9 = urem i64 %8, 256, !insn.addr !59
  %10 = call i64 @crc32_byte(i64 %9), !insn.addr !60
  %11 = udiv i64 %arg1, 4294967296, !insn.addr !61
  %12 = urem i64 %11, 256, !insn.addr !62
  %13 = call i64 @crc32_byte(i64 %12), !insn.addr !63
  %14 = udiv i64 %arg1, 1099511627776, !insn.addr !64
  %15 = urem i64 %14, 256, !insn.addr !65
  %16 = call i64 @crc32_byte(i64 %15), !insn.addr !66
  %17 = udiv i64 %arg1, 281474976710656, !insn.addr !67
  %18 = urem i64 %17, 256, !insn.addr !68
  %19 = call i64 @crc32_byte(i64 %18), !insn.addr !69
  %20 = udiv i64 %arg1, 72057594037927936, !insn.addr !70
  %21 = call i64 @crc32_byte(i64 %20), !insn.addr !71
  ret i64 %21, !insn.addr !72

; uselistorder directives
  uselistorder i64 (i64)* @crc32_byte, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 256, { 2, 3, 4, 5, 6, 7, 1, 8, 0, 9 }
}

define i64 @crc32_byte(i64 %arg1) local_unnamed_addr {
dec_label_pc_4007e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !73
  %1 = load i32, i32* @global_var_403018, align 4
  %2 = udiv i32 %1, 256, !insn.addr !74
  %3 = xor i32 %1, %0, !insn.addr !75
  %4 = mul i32 %3, 4, !insn.addr !76
  %5 = and i32 %4, 1020
  %6 = zext i32 %5 to i64, !insn.addr !77
  %7 = add i64 %6, ptrtoint (i32** @global_var_403030 to i64), !insn.addr !77
  %8 = inttoptr i64 %7 to i32*, !insn.addr !77
  %9 = load i32, i32* %8, align 4, !insn.addr !77
  %10 = xor i32 %2, %9, !insn.addr !77
  %11 = zext i32 %10 to i64, !insn.addr !77
  store i32 %10, i32* @global_var_403018, align 4, !insn.addr !78
  ret i64 %11, !insn.addr !79

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder i32* @global_var_403018, { 2, 1, 0 }
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
!24 = !{i64 4195722}
!25 = !{i64 4195727}
!26 = !{i64 4195747}
!27 = !{i64 4195752}
!28 = !{i64 4195764}
!29 = !{i64 4195781}
!30 = !{i64 4195792}
!31 = !{i64 4195841}
!32 = !{i64 4195844}
!33 = !{i64 4195877}
!34 = !{i64 4195836}
!35 = !{i64 4195892}
!36 = !{i64 4195817}
!37 = !{i64 4195911}
!38 = !{i64 4195944}
!39 = !{i64 4195953}
!40 = !{i64 4195968}
!41 = !{i64 4195991}
!42 = !{i64 4195996}
!43 = !{i64 4196000}
!44 = !{i64 4196006}
!45 = !{i64 4196040}
!46 = !{i64 4196050}
!47 = !{i64 4196072}
!48 = !{i64 4196093}
!49 = !{i64 4196103}
!50 = !{i64 4196138}
!51 = !{i64 4196141}
!52 = !{i64 4196150}
!53 = !{i64 4196160}
!54 = !{i64 4196163}
!55 = !{i64 4196172}
!56 = !{i64 4196182}
!57 = !{i64 4196185}
!58 = !{i64 4196194}
!59 = !{i64 4196204}
!60 = !{i64 4196207}
!61 = !{i64 4196216}
!62 = !{i64 4196226}
!63 = !{i64 4196229}
!64 = !{i64 4196238}
!65 = !{i64 4196248}
!66 = !{i64 4196251}
!67 = !{i64 4196260}
!68 = !{i64 4196270}
!69 = !{i64 4196273}
!70 = !{i64 4196282}
!71 = !{i64 4196295}
!72 = !{i64 4196305}
!73 = !{i64 4196327}
!74 = !{i64 4196337}
!75 = !{i64 4196356}
!76 = !{i64 4196358}
!77 = !{i64 4196366}
!78 = !{i64 4196373}
!79 = !{i64 4196381}
