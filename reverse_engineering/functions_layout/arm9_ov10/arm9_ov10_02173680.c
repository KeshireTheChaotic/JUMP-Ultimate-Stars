
undefined4 FUN_02173680(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_88 [2];
  undefined1 local_86 [6];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  byte local_64 [2];
  undefined1 local_62;
  undefined1 local_61;
  undefined1 auStack_60 [76];
  
  FUN_020517fc(param_1,0,0x94);
  iVar3 = param_2[1];
  if (iVar3 == 0 && *param_2 == 0) {
    iVar3 = param_2[3];
    FUN_02052c44(param_1,0xe,s__013llu_021a3900,param_2[2],iVar3);
  }
  else {
    FUN_02052c44(param_1,0xe,s__013llu_021a3900,*param_2,iVar3);
  }
  FUN_02052c44(param_1 + 0xe,7,&DAT_021a3908,(short)param_2[4],iVar3);
  if (DAT_027ffe0c == '\0') {
    FUN_02055684();
  }
  FUN_02051890(&DAT_027ffe0c,param_1 + 0x15,4);
  if (DAT_027ffe10 == '\0') {
    FUN_02055684();
  }
  FUN_02051890(&DAT_027ffe10,param_1 + 0x1a,2);
  *(undefined1 *)(param_1 + 0x1d) = 0x30;
  FUN_020554a8(local_86);
  iVar6 = 0;
  puVar4 = local_86;
  iVar3 = param_1 + 0x1f;
  do {
    FUN_02052c8c(iVar3,&DAT_021a3910,*puVar4);
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + 2;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  FUN_0205542c(local_64);
  if (6 < local_64[0]) {
    local_64[0] = 1;
  }
  FUN_02052c44(param_1 + 0x2c,3,&DAT_021a3910,local_64[0]);
  FUN_02051890(auStack_60,param_1 + 0x7e,0x14);
  FUN_02052c44(param_1 + 0x2f,5,s__02x_02x_021a3918,local_62,local_61);
  iVar3 = FUN_020561dc(&local_80);
  if ((iVar3 != 0) || (iVar3 = FUN_0205611c(&local_70), iVar3 != 0)) {
    return 0;
  }
  FUN_02052c44(param_1 + 0x34,0xd,s__02d_02d_02d_02d_02d_02d_021a3924,local_80,local_7c,local_78,
               local_70,local_6c,local_68);
  uVar1 = OS_DisableInterrupts();
  iVar3 = FUN_02199be0();
  DC_InvalidateRange(iVar3,6);
  if (iVar3 == 0) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  iVar6 = 0;
  iVar5 = param_1 + 0x41;
  do {
    FUN_02052c8c(iVar5,&DAT_021a3910,*(undefined1 *)(iVar3 + iVar6));
    iVar5 = iVar5 + 2;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  uVar2 = FUN_020675a8();
  FUN_02052c44(param_1 + 0x6f,0xe,s__02d_0000000_00_021a3940,uVar2);
  iVar3 = FUN_02199b8c(auStack_88);
  DC_InvalidateRange(iVar3,0x20);
  if (iVar3 == 0) {
    OS_RestoreInterrupts(uVar1);
    return 0;
  }
  FUN_020694a0(iVar3,param_1 + 0x72);
  FUN_02051890(iVar3,param_1 + 0x4e,0x20);
  OS_RestoreInterrupts(uVar1);
  return 1;
}

