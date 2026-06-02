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

define i64 @codemarker_alpha(i64 %arg1) local_unnamed_addr {
dec_label_pc_400480:
  %0 = and i64 %arg1, 4294967295, !insn.addr !0
  ret i64 %0, !insn.addr !1
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_4004a0:
  %stack_var_-32.0.reg2mem = alloca i32, !insn.addr !2
  %0 = trunc i64 %argc to i32, !insn.addr !3
  %1 = call i64 @codemarker_alpha(i64 2), !insn.addr !4
  %2 = call i64 @codemarker_alpha(i64 3), !insn.addr !5
  %3 = call i64 @codemarker_alpha(i64 4), !insn.addr !6
  %4 = icmp eq i32 %0, 2, !insn.addr !7
  %5 = icmp eq i1 %4, false, !insn.addr !8
  store i32 0, i32* %stack_var_-32.0.reg2mem, !insn.addr !8
  br i1 %5, label %dec_label_pc_4004ff, label %dec_label_pc_4004e1, !insn.addr !8

dec_label_pc_4004e1:                              ; preds = %dec_label_pc_4004a0
  %6 = ptrtoint i8** %argv to i64, !insn.addr !9
  %7 = add i64 %6, 8, !insn.addr !10
  %8 = inttoptr i64 %7 to i64*, !insn.addr !10
  %9 = load i64, i64* %8, align 8, !insn.addr !10
  %10 = inttoptr i64 %9 to i8*, !insn.addr !11
  %11 = call i32 @strcmp(i8* %10, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_4011b8, i64 0, i64 0)), !insn.addr !11
  %12 = icmp eq i32 %11, 0, !insn.addr !12
  %spec.select = zext i1 %12 to i32
  store i32 %spec.select, i32* %stack_var_-32.0.reg2mem
  br label %dec_label_pc_4004ff

dec_label_pc_4004ff:                              ; preds = %dec_label_pc_4004e1, %dec_label_pc_4004a0
  %stack_var_-32.0.reload = load i32, i32* %stack_var_-32.0.reg2mem
  %13 = call i64 @codemarker_alpha(i64 5), !insn.addr !13
  %14 = call i64 @platform_main_begin(), !insn.addr !14
  %15 = call i64 @codemarker_alpha(i64 6), !insn.addr !15
  %16 = call i64 @crc32_gentab(), !insn.addr !16
  %17 = call i64 @func_1(i64 6), !insn.addr !17
  %18 = load i32, i32* @global_var_403020, align 4, !insn.addr !18
  %19 = call i64 @transparent_crc(i32 %18, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_4011ba, i64 0, i64 0), i32 %stack_var_-32.0.reload), !insn.addr !19
  %20 = load i32, i32* @global_var_403024, align 4, !insn.addr !20
  %21 = sub i32 0, %20
  %22 = sub i32 %21, 1
  %23 = zext i32 %22 to i64, !insn.addr !21
  %24 = call i64 @platform_main_end(i64 %23, i32 %stack_var_-32.0.reload), !insn.addr !22
  ret i64 0, !insn.addr !23
}

define i64 @platform_main_begin() local_unnamed_addr {
dec_label_pc_400570:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !24
}

define i64 @crc32_gentab() local_unnamed_addr {
dec_label_pc_400580:
  %stack_var_-12.03.reg2mem = alloca i32, !insn.addr !25
  %storemerge4.reg2mem = alloca i32, !insn.addr !25
  %indvars.iv.reg2mem = alloca i64, !insn.addr !25
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_4005a8.preheader

dec_label_pc_4005a8.preheader:                    ; preds = %dec_label_pc_400580, %dec_label_pc_4005dd
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %0 = trunc i64 %indvars.iv.reload to i32
  store i32 8, i32* %storemerge4.reg2mem
  store i32 %0, i32* %stack_var_-12.03.reg2mem
  br label %dec_label_pc_4005ae

dec_label_pc_4005ae:                              ; preds = %dec_label_pc_4005a8.preheader, %dec_label_pc_4005ae
  %stack_var_-12.03.reload = load i32, i32* %stack_var_-12.03.reg2mem
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %1 = urem i32 %stack_var_-12.03.reload, 2, !insn.addr !26
  %2 = icmp eq i32 %1, 0, !insn.addr !27
  %3 = udiv i32 %stack_var_-12.03.reload, 2
  %4 = xor i32 %3, -306674912
  %storemerge1 = select i1 %2, i32 %3, i32 %4
  %5 = add nsw i32 %storemerge4.reload, -1, !insn.addr !28
  %6 = icmp eq i32 %5, 0, !insn.addr !29
  store i32 %5, i32* %storemerge4.reg2mem, !insn.addr !29
  store i32 %storemerge1, i32* %stack_var_-12.03.reg2mem, !insn.addr !29
  br i1 %6, label %dec_label_pc_4005dd, label %dec_label_pc_4005ae, !insn.addr !29

dec_label_pc_4005dd:                              ; preds = %dec_label_pc_4005ae
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !30
  %8 = add i64 %7, ptrtoint (i32** @global_var_403070 to i64), !insn.addr !30
  %9 = inttoptr i64 %8 to i32*, !insn.addr !30
  store i32 %storemerge1, i32* %9, align 4, !insn.addr !30
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 256
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !31
  br i1 %exitcond, label %dec_label_pc_4005f6, label %dec_label_pc_4005a8.preheader, !insn.addr !31

dec_label_pc_4005f6:                              ; preds = %dec_label_pc_4005dd
  ret i64 256, !insn.addr !32

; uselistorder directives
  uselistorder i32 %storemerge1, { 1, 0 }
  uselistorder i32 %3, { 1, 0 }
  uselistorder i32 %stack_var_-12.03.reload, { 1, 0 }
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i32* %storemerge4.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-12.03.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_4005ae, { 1, 0 }
  uselistorder label %dec_label_pc_4005a8.preheader, { 1, 0 }
}

define i64 @func_1(i64 %arg1) local_unnamed_addr {
dec_label_pc_400600:
  %indvars.iv.reg2mem = alloca i64, !insn.addr !33
  %stack_var_-8 = alloca i64, align 8
  %0 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !34
  %1 = call i64 @codemarker_alpha(i64 0), !insn.addr !35
  %2 = call i64 @codemarker_alpha(i64 1), !insn.addr !36
  %3 = add i64 %0, -48, !insn.addr !37
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_400a97

dec_label_pc_400a97:                              ; preds = %dec_label_pc_400600, %dec_label_pc_400a97
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = mul i64 %indvars.iv.reload, 8, !insn.addr !37
  %5 = add i64 %3, %4, !insn.addr !37
  %6 = inttoptr i64 %5 to i64*, !insn.addr !37
  store i64 ptrtoint (i32* @global_var_403020 to i64), i64* %6, align 8, !insn.addr !37
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 6
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !38
  br i1 %exitcond, label %dec_label_pc_400abe, label %dec_label_pc_400a97, !insn.addr !38

dec_label_pc_400abe:                              ; preds = %dec_label_pc_400a97
  store i64 0, i64* inttoptr (i64 4206672 to i64*), align 16, !insn.addr !39
  %7 = load i32, i32* @global_var_403020, align 4, !insn.addr !40
  %8 = zext i32 %7 to i64, !insn.addr !40
  ret i64 %8, !insn.addr !41

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder i64 6, { 0, 2, 1 }
  uselistorder i32* @global_var_403020, { 1, 2, 0 }
  uselistorder i64 1, { 0, 2, 1 }
  uselistorder i64 (i64)* @codemarker_alpha, { 6, 5, 4, 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_400a97, { 1, 0 }
}

define i64 @transparent_crc(i32 %arg1, i8* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_400ae0:
  %rax.0.reg2mem = alloca i64, !insn.addr !42
  %0 = sext i32 %arg1 to i64
  %1 = call i64 @crc32_8bytes(i64 %0), !insn.addr !43
  %2 = icmp eq i32 %arg3, 0, !insn.addr !44
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !45
  br i1 %2, label %dec_label_pc_400b2d, label %dec_label_pc_400b02, !insn.addr !45

dec_label_pc_400b02:                              ; preds = %dec_label_pc_400ae0
  %3 = load i32, i32* @global_var_403024, align 4, !insn.addr !46
  %4 = sub i32 0, %3
  %5 = sub i32 %4, 1
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([36 x i8], [36 x i8]* @global_var_4011be, i64 0, i64 0), i8* %arg2, i32 %5), !insn.addr !47
  %7 = sext i32 %6 to i64, !insn.addr !47
  store i64 %7, i64* %rax.0.reg2mem, !insn.addr !47
  br label %dec_label_pc_400b2d, !insn.addr !47

dec_label_pc_400b2d:                              ; preds = %dec_label_pc_400b02, %dec_label_pc_400ae0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !48

; uselistorder directives
  uselistorder i32 0, { 1, 4, 3, 5, 2, 6, 0 }
  uselistorder i32 1, { 7, 1, 9, 2, 5, 4, 3, 0, 8, 6 }
}

define i64 @platform_main_end(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_400b40:
  %0 = trunc i64 %arg1 to i32, !insn.addr !49
  %1 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @global_var_4011e2, i64 0, i64 0), i32 %0), !insn.addr !50
  %2 = sext i32 %1 to i64, !insn.addr !50
  ret i64 %2, !insn.addr !51

; uselistorder directives
  uselistorder i64 0, { 7, 8, 9, 10, 15, 0, 11, 1, 2, 12, 13, 3, 4, 5, 6, 14 }
}

define i64 @crc32_8bytes(i64 %arg1) local_unnamed_addr {
dec_label_pc_400b70:
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
dec_label_pc_400c40:
  %0 = trunc i64 %arg1 to i32, !insn.addr !75
  %1 = load i32, i32* @global_var_403024, align 4
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
  store i32 %10, i32* @global_var_403024, align 4, !insn.addr !80
  ret i64 %11, !insn.addr !81

; uselistorder directives
  uselistorder i32 %1, { 1, 0 }
  uselistorder i32 -1, { 1, 0 }
  uselistorder i32* @global_var_403024, { 3, 2, 1, 0 }
}

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

!0 = !{i64 4195469}
!1 = !{i64 4195473}
!2 = !{i64 4195488}
!3 = !{i64 4195503}
!4 = !{i64 4195515}
!5 = !{i64 4195525}
!6 = !{i64 4195542}
!7 = !{i64 4195547}
!8 = !{i64 4195551}
!9 = !{i64 4195553}
!10 = !{i64 4195557}
!11 = !{i64 4195566}
!12 = !{i64 4195571}
!13 = !{i64 4195588}
!14 = !{i64 4195593}
!15 = !{i64 4195603}
!16 = !{i64 4195608}
!17 = !{i64 4195613}
!18 = !{i64 4195618}
!19 = !{i64 4195639}
!20 = !{i64 4195644}
!21 = !{i64 4195664}
!22 = !{i64 4195669}
!23 = !{i64 4195681}
!24 = !{i64 4195701}
!25 = !{i64 4195712}
!26 = !{i64 4195761}
!27 = !{i64 4195764}
!28 = !{i64 4195797}
!29 = !{i64 4195756}
!30 = !{i64 4195812}
!31 = !{i64 4195737}
!32 = !{i64 4195831}
!33 = !{i64 4195840}
!34 = !{i64 4195841}
!35 = !{i64 4196981}
!36 = !{i64 4196991}
!37 = !{i64 4197032}
!38 = !{i64 4197013}
!39 = !{i64 4197054}
!40 = !{i64 4197066}
!41 = !{i64 4197081}
!42 = !{i64 4197088}
!43 = !{i64 4197111}
!44 = !{i64 4197116}
!45 = !{i64 4197120}
!46 = !{i64 4197126}
!47 = !{i64 4197160}
!48 = !{i64 4197170}
!49 = !{i64 4197192}
!50 = !{i64 4197213}
!51 = !{i64 4197223}
!52 = !{i64 4197258}
!53 = !{i64 4197261}
!54 = !{i64 4197270}
!55 = !{i64 4197280}
!56 = !{i64 4197283}
!57 = !{i64 4197292}
!58 = !{i64 4197302}
!59 = !{i64 4197305}
!60 = !{i64 4197314}
!61 = !{i64 4197324}
!62 = !{i64 4197327}
!63 = !{i64 4197336}
!64 = !{i64 4197346}
!65 = !{i64 4197349}
!66 = !{i64 4197358}
!67 = !{i64 4197368}
!68 = !{i64 4197371}
!69 = !{i64 4197380}
!70 = !{i64 4197390}
!71 = !{i64 4197393}
!72 = !{i64 4197402}
!73 = !{i64 4197415}
!74 = !{i64 4197425}
!75 = !{i64 4197447}
!76 = !{i64 4197457}
!77 = !{i64 4197476}
!78 = !{i64 4197478}
!79 = !{i64 4197486}
!80 = !{i64 4197493}
!81 = !{i64 4197501}
