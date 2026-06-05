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

define i64 @mage_alpha7(i64 %arg1) local_unnamed_addr {
dec_label_pc_400560:
  %0 = and i64 %arg1, 4294967295, !insn.addr !14
  ret i64 %0, !insn.addr !15
}

define i64 @mage_alpha8(i64 %arg1) local_unnamed_addr {
dec_label_pc_400580:
  %0 = and i64 %arg1, 4294967295, !insn.addr !16
  ret i64 %0, !insn.addr !17
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_4005a0:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !18
  %stack_var_-32.0.reg2mem = alloca i32, !insn.addr !18
  %0 = trunc i64 %argc to i32, !insn.addr !19
  %1 = call i64 @mage_alpha0(i32 0), !insn.addr !20
  %2 = call i64 @mage_alpha1(i64 1), !insn.addr !21
  %3 = call i64 @mage_alpha2(i64 2), !insn.addr !22
  %4 = icmp eq i32 %0, 2, !insn.addr !23
  %5 = icmp eq i1 %4, false, !insn.addr !24
  store i32 0, i32* %stack_var_-32.0.reg2mem, !insn.addr !24
  br i1 %5, label %dec_label_pc_4005fc, label %dec_label_pc_4005de, !insn.addr !24

dec_label_pc_4005de:                              ; preds = %dec_label_pc_4005a0
  %6 = ptrtoint i8** %argv to i64, !insn.addr !25
  %7 = add i64 %6, 8, !insn.addr !26
  %8 = inttoptr i64 %7 to i64*, !insn.addr !26
  %9 = load i64, i64* %8, align 8, !insn.addr !26
  %10 = inttoptr i64 %9 to i8*, !insn.addr !27
  %11 = call i32 @strcmp(i8* %10, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_4011b8, i64 0, i64 0)), !insn.addr !27
  %12 = icmp eq i32 %11, 0, !insn.addr !28
  %spec.select = zext i1 %12 to i32
  store i32 %spec.select, i32* %stack_var_-32.0.reg2mem
  br label %dec_label_pc_4005fc

dec_label_pc_4005fc:                              ; preds = %dec_label_pc_4005de, %dec_label_pc_4005a0
  %stack_var_-32.0.reload = load i32, i32* %stack_var_-32.0.reg2mem
  %13 = call i64 @mage_alpha3(i64 3), !insn.addr !29
  %14 = call i64 @platform_main_begin(), !insn.addr !30
  %15 = call i64 @mage_alpha4(i64 4), !insn.addr !31
  %16 = call i64 @crc32_gentab(), !insn.addr !32
  %17 = call i64 @mage_alpha5(i64 5), !insn.addr !33
  %18 = call i64 @func_1(), !insn.addr !34
  %19 = call i64 @mage_alpha6(i64 6), !insn.addr !35
  %20 = icmp eq i32 %stack_var_-32.0.reload, 0
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400644

dec_label_pc_400644:                              ; preds = %dec_label_pc_4005fc, %dec_label_pc_400693
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %21 = mul i64 %indvars.iv.reload, 8, !insn.addr !36
  %22 = add i64 %21, ptrtoint (i8** @global_var_403030 to i64), !insn.addr !36
  %23 = inttoptr i64 %22 to i8*, !insn.addr !36
  %24 = load i8, i8* %23, align 8, !insn.addr !36
  %25 = call i64 @transparent_crc(i8 %24, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @global_var_4011ba, i64 0, i64 0), i32 %stack_var_-32.0.reload), !insn.addr !37
  %26 = call i64 @mage_alpha7(i64 7), !insn.addr !38
  br i1 %20, label %dec_label_pc_400693, label %dec_label_pc_400673, !insn.addr !39

dec_label_pc_400673:                              ; preds = %dec_label_pc_400644
  %27 = call i64 @mage_alpha8(i64 8), !insn.addr !40
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_4011c4, i64 0, i64 0), i64 %indvars.iv.reload), !insn.addr !41
  br label %dec_label_pc_400693, !insn.addr !41

dec_label_pc_400693:                              ; preds = %dec_label_pc_400644, %dec_label_pc_400673
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 6
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !42
  br i1 %exitcond, label %dec_label_pc_40069e, label %dec_label_pc_400644, !insn.addr !42

dec_label_pc_40069e:                              ; preds = %dec_label_pc_400693
  %29 = load i32, i32* @global_var_403020, align 4, !insn.addr !43
  %30 = sub i32 0, %29
  %31 = sub i32 %30, 1
  %32 = zext i32 %31 to i64, !insn.addr !44
  %33 = call i64 @platform_main_end(i64 %32, i32 %stack_var_-32.0.reload), !insn.addr !45
  ret i64 0, !insn.addr !46

; uselistorder directives
  uselistorder i32 %stack_var_-32.0.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 8, { 1, 0, 2 }
  uselistorder label %dec_label_pc_400693, { 1, 0 }
  uselistorder label %dec_label_pc_400644, { 1, 0 }
}

define i64 @platform_main_begin() local_unnamed_addr {
dec_label_pc_4006d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !47
}

define i64 @crc32_gentab() local_unnamed_addr {
dec_label_pc_4006e0:
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !48
  %storemerge4.reg2mem = alloca i32, !insn.addr !48
  %indvars.iv.reg2mem = alloca i64, !insn.addr !48
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400708.preheader

dec_label_pc_400708.preheader:                    ; preds = %dec_label_pc_4006e0, %dec_label_pc_40073d
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %0 = trunc i64 %indvars.iv.reload to i32
  store i32 8, i32* %storemerge4.reg2mem
  store i32 %0, i32* %stack_var_-12.03.reg2mem
  br label %dec_label_pc_40070e

dec_label_pc_40070e:                              ; preds = %dec_label_pc_400708.preheader, %dec_label_pc_40070e
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = urem i32 %stack_var_-12.03.reload, 2, !insn.addr !49
  %2 = icmp eq i32 %1, 0, !insn.addr !50
  %3 = udiv i32 %stack_var_-12.03.reload, 2
  %4 = xor i32 %3, -306674912
  %storemerge1 = select i1 %2, i32 %3, i32 %4
  %5 = add nsw i32 %storemerge4.reload, -1, !insn.addr !51
  %6 = icmp eq i32 %5, 0, !insn.addr !52
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !52
  store i32 %storemerge1, i32* %stack_var_-12.03.reg2mem, !insn.addr !52
  br i1 %6, label %dec_label_pc_40073d, label %dec_label_pc_40070e, !insn.addr !52

dec_label_pc_40073d:                              ; preds = %dec_label_pc_40070e
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !53
  %8 = add i64 %7, ptrtoint (i32** @global_var_403070 to i64), !insn.addr !53
  %9 = inttoptr i64 %8 to i32*, !insn.addr !53
  store i32 %storemerge1, i32* %9, align 4, !insn.addr !53
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 256
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !54
  br i1 %exitcond, label %dec_label_pc_400756, label %dec_label_pc_400708.preheader, !insn.addr !54

dec_label_pc_400756:                              ; preds = %dec_label_pc_40073d
  ret i64 256, !insn.addr !55

; uselistorder directives
  uselistorder i32 %storemerge1, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %stack_var_-12.03.reload, { 1, 0 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_40070e, { 1, 0 }
  uselistorder label %dec_label_pc_400708.preheader, { 1, 0 }
}

define i64 @func_1() local_unnamed_addr {
dec_label_pc_400760:
  %0 = load i8*, i8** @global_var_403030, align 8, !insn.addr !56
  %1 = ptrtoint i8* %0 to i64, !insn.addr !56
  ret i64 %1, !insn.addr !57

; uselistorder directives
  uselistorder i8** @global_var_403030, { 1, 0 }
}

define i64 @transparent_crc(i8 %arg1, i8* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_400780:
  %rax.0.reg2mem = alloca i64, !insn.addr !58
  %0 = sext i8 %arg1 to i64
  %1 = call i64 @crc32_8bytes(i64 %0), !insn.addr !59
  %2 = icmp eq i32 %arg3, 0, !insn.addr !60
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !61
  br i1 %2, label %dec_label_pc_4007cd, label %dec_label_pc_4007a2, !insn.addr !61

dec_label_pc_4007a2:                              ; preds = %dec_label_pc_400780
  %3 = load i32, i32* @global_var_403020, align 4, !insn.addr !62
  %4 = sub i32 0, %3
  %5 = sub i32 %4, 1
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_4011d2, i64 0, i64 0), i8* %arg2, i32 %5), !insn.addr !63
  %7 = sext i32 %6 to i64, !insn.addr !63
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !63
  br label %dec_label_pc_4007cd, !insn.addr !63

dec_label_pc_4007cd:                              ; preds = %dec_label_pc_4007a2, %dec_label_pc_400780
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !64

; uselistorder directives
  uselistorder i32 0, { 1, 5, 3, 6, 2, 7, 8, 0, 4 }
  uselistorder i32 1, { 7, 1, 4, 3, 2, 0, 8, 6, 5 }
}

define i64 @platform_main_end(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_4007e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !65
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_4011f6, i64 0, i64 0), i32 %0), !insn.addr !66
  %2 = sext i32 %1 to i64, !insn.addr !66
  ret i64 %2, !insn.addr !67

; uselistorder directives
  uselistorder i32 (i8*, ...)* @printf, { 1, 0, 2 }
  uselistorder i64 0, { 9, 10, 11, 12, 0, 2, 13, 14, 15, 16, 1, 3, 4, 5, 6, 7, 8, 17 }
}

define i64 @crc32_8bytes(i64 %arg1) local_unnamed_addr {
dec_label_pc_400810:
  %0 = urem i64 %arg1, 256, !insn.addr !68
  %1 = call i64 @crc32_byte(i64 %0), !insn.addr !69
  %2 = udiv i64 %arg1, 256, !insn.addr !70
  %3 = urem i64 %2, 256, !insn.addr !71
  %4 = call i64 @crc32_byte(i64 %3), !insn.addr !72
  %5 = udiv i64 %arg1, 65536, !insn.addr !73
  %6 = urem i64 %5, 256, !insn.addr !74
  %7 = call i64 @crc32_byte(i64 %6), !insn.addr !75
  %8 = udiv i64 %arg1, 16777216, !insn.addr !76
  %9 = urem i64 %8, 256, !insn.addr !77
  %10 = call i64 @crc32_byte(i64 %9), !insn.addr !78
  %11 = udiv i64 %arg1, 4294967296, !insn.addr !79
  %12 = urem i64 %11, 256, !insn.addr !80
  %13 = call i64 @crc32_byte(i64 %12), !insn.addr !81
  %14 = udiv i64 %arg1, 1099511627776, !insn.addr !82
  %15 = urem i64 %14, 256, !insn.addr !83
  %16 = call i64 @crc32_byte(i64 %15), !insn.addr !84
  %17 = udiv i64 %arg1, 281474976710656, !insn.addr !85
  %18 = urem i64 %17, 256, !insn.addr !86
  %19 = call i64 @crc32_byte(i64 %18), !insn.addr !87
  %20 = udiv i64 %arg1, 72057594037927936, !insn.addr !88
  %21 = call i64 @crc32_byte(i64 %20), !insn.addr !89
  ret i64 %21, !insn.addr !90

; uselistorder directives
  uselistorder i64 (i64)* @crc32_byte, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 256, { 2, 3, 4, 5, 6, 7, 1, 8, 0, 9 }
}

define i64 @crc32_byte(i64 %arg1) local_unnamed_addr {
dec_label_pc_4008e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !91
  %1 = load i32, i32* @global_var_403020, align 4
  %2 = udiv i32 %1, 256, !insn.addr !92
  %3 = xor i32 %1, %0, !insn.addr !93
  %4 = mul i32 %3, 4, !insn.addr !94
  %5 = and i32 %4, 1020
  %6 = zext i32 %5 to i64, !insn.addr !95
  %7 = add i64 %6, ptrtoint (i32** @global_var_403070 to i64), !insn.addr !95
  %8 = inttoptr i64 %7 to i32*, !insn.addr !95
  %9 = load i32, i32* %8, align 4, !insn.addr !95
  %10 = xor i32 %2, %9, !insn.addr !95
  %11 = zext i32 %10 to i64, !insn.addr !95
  store i32 %10, i32* @global_var_403020, align 4, !insn.addr !96
  ret i64 %11, !insn.addr !97

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder i32* @global_var_403020, { 3, 2, 1, 0 }
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
!14 = !{i64 4195693}
!15 = !{i64 4195697}
!16 = !{i64 4195725}
!17 = !{i64 4195729}
!18 = !{i64 4195744}
!19 = !{i64 4195759}
!20 = !{i64 4195768}
!21 = !{i64 4195778}
!22 = !{i64 4195795}
!23 = !{i64 4195800}
!24 = !{i64 4195804}
!25 = !{i64 4195806}
!26 = !{i64 4195810}
!27 = !{i64 4195819}
!28 = !{i64 4195824}
!29 = !{i64 4195841}
!30 = !{i64 4195846}
!31 = !{i64 4195856}
!32 = !{i64 4195861}
!33 = !{i64 4195871}
!34 = !{i64 4195876}
!35 = !{i64 4195890}
!36 = !{i64 4195912}
!37 = !{i64 4195934}
!38 = !{i64 4195944}
!39 = !{i64 4195953}
!40 = !{i64 4195960}
!41 = !{i64 4195980}
!42 = !{i64 4195906}
!43 = !{i64 4195998}
!44 = !{i64 4196018}
!45 = !{i64 4196023}
!46 = !{i64 4196035}
!47 = !{i64 4196053}
!48 = !{i64 4196064}
!49 = !{i64 4196113}
!50 = !{i64 4196116}
!51 = !{i64 4196149}
!52 = !{i64 4196108}
!53 = !{i64 4196164}
!54 = !{i64 4196089}
!55 = !{i64 4196183}
!56 = !{i64 4196196}
!57 = !{i64 4196213}
!58 = !{i64 4196224}
!59 = !{i64 4196247}
!60 = !{i64 4196252}
!61 = !{i64 4196256}
!62 = !{i64 4196262}
!63 = !{i64 4196296}
!64 = !{i64 4196306}
!65 = !{i64 4196328}
!66 = !{i64 4196349}
!67 = !{i64 4196359}
!68 = !{i64 4196394}
!69 = !{i64 4196397}
!70 = !{i64 4196406}
!71 = !{i64 4196416}
!72 = !{i64 4196419}
!73 = !{i64 4196428}
!74 = !{i64 4196438}
!75 = !{i64 4196441}
!76 = !{i64 4196450}
!77 = !{i64 4196460}
!78 = !{i64 4196463}
!79 = !{i64 4196472}
!80 = !{i64 4196482}
!81 = !{i64 4196485}
!82 = !{i64 4196494}
!83 = !{i64 4196504}
!84 = !{i64 4196507}
!85 = !{i64 4196516}
!86 = !{i64 4196526}
!87 = !{i64 4196529}
!88 = !{i64 4196538}
!89 = !{i64 4196551}
!90 = !{i64 4196561}
!91 = !{i64 4196583}
!92 = !{i64 4196593}
!93 = !{i64 4196612}
!94 = !{i64 4196614}
!95 = !{i64 4196622}
!96 = !{i64 4196629}
!97 = !{i64 4196637}
