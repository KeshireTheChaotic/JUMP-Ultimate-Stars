
undefined4
FUN_0217c024(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  int local_22c;
  undefined1 auStack_228 [16];
  undefined1 local_218 [516];
  
  iVar4 = 0;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) != '\0') {
    iVar1 = FUN_02178448();
    if (((*(char *)(iVar1 + 0x15) != '\x03') &&
        (iVar1 = FUN_02178448(), *(char *)(iVar1 + 0x19e) == '\0')) || (param_1 != 6)) {
      if ((param_5 != (undefined4 *)0x0) && (param_6 != 0)) {
        iVar4 = FUN_02052c44(local_218,0x200,&DAT_021a4b2c,*param_5);
        local_22c = 1;
        if (1 < param_6) {
          puVar3 = param_5;
          do {
            puVar3 = puVar3 + 1;
            iVar1 = FUN_02052c44(auStack_228,0x10,&DAT_021a4bac,*puVar3);
            FUN_02051890(auStack_228,local_218 + iVar4,iVar1);
            iVar4 = iVar4 + iVar1;
            local_22c = local_22c + 1;
          } while (local_22c < param_6);
        }
      }
      local_218[iVar4] = 0;
      puVar3 = (undefined4 *)FUN_02178448();
      uVar2 = FUN_0217bf10(*puVar3,param_1,param_2,local_218);
      goto LAB_0217c0d8;
    }
  }
  uVar2 = FUN_0217bf7c(param_1,param_3,param_4,param_5,param_6);
LAB_0217c0d8:
  if (((param_1 == 2) || (param_1 == 6)) || ((param_1 + 0xf8U & 0xff) < 2)) {
    iVar1 = FUN_02178448();
    *(char *)(iVar1 + 0x3c4) = (char)param_1;
    iVar1 = FUN_02178448();
    *(short *)(iVar1 + 0x3c6) = (short)param_4;
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + 0x3c8) = param_3;
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + 0x44c) = param_2;
    iVar1 = FUN_02178448();
    *(int *)(iVar1 + 0x450) = param_6;
    iVar1 = FUN_02178448();
    uVar5 = FUN_02054b44();
    *(undefined8 *)(iVar1 + 0x454) = uVar5;
    if ((param_5 != (undefined4 *)0x0) && (param_6 != 0)) {
      iVar1 = FUN_02178448();
      MIi_CpuCopy32(param_5,iVar1 + 0x3cc,param_6 << 2);
    }
  }
  return uVar2;
}

