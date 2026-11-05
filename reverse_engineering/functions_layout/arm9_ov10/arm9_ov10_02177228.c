
void FUN_02177228(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [52];
  undefined1 auStack_24 [12];
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_020517fc(auStack_58,0,0x48);
  DAT_021a7598 = param_2;
  DAT_021a75a0 = param_1;
  iVar1 = FUN_020698e4(*(undefined4 *)(DAT_021a759c + 0x1c));
  if (iVar1 == 0) {
    iVar1 = FUN_020698f0(DAT_021a759c + 0x3c);
    if (iVar1 == 0) {
      iVar2 = FUN_02069908(*(int *)(DAT_021a759c + 0x1c) + 4);
      iVar1 = DAT_021a759c;
      if (iVar2 == 0) {
        FUN_02069958(DAT_021a759c + 0x3c);
      }
      else {
        iVar2 = *(int *)(DAT_021a759c + 0x1c);
        uVar3 = *(undefined4 *)(iVar2 + 8);
        *(undefined4 *)(DAT_021a759c + 0x3c) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar1 + 0x40) = uVar3;
        *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar2 + 0xc);
      }
    }
    else {
      uVar5 = FUN_02054b44();
      lVar4 = FUN_0200d10c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x6c078965,0x5d588b65);
      FUN_02069c70(DAT_021a759c + 0x3c,(int)((ulonglong)(lVar4 + 0x269ec3) >> 0x20),
                   (int)(lVar4 + 0x269ec3));
    }
    FUN_02069a2c(DAT_021a759c + 0x3c,*(undefined4 *)(DAT_021a759c + 0xc),DAT_021a759c + 0x248);
  }
  else {
    FUN_02069a2c(*(int *)(DAT_021a759c + 0x1c) + 0x10,
                 *(undefined4 *)(*(int *)(DAT_021a759c + 0x1c) + 0x24),DAT_021a759c + 0x248);
  }
  iVar1 = FUN_02175b90(*(undefined4 *)(DAT_021a759c + 0x10));
  FUN_02051890(*(undefined4 *)(DAT_021a759c + 0x10),auStack_58,iVar1 * 2 + 2);
  FUN_02004b18(auStack_24,DAT_021a759c + 0x251);
  local_18 = 0x21758cd;
  local_14 = 0x21758a5;
  uVar3 = FUN_021758b8(0,0x1c10,4);
  *(undefined4 *)(DAT_021a759c + 0x24) = uVar3;
  uVar5 = FUN_02054b44();
  *(undefined8 *)(DAT_021a759c + 0x28) = uVar5;
  FUN_02173340(auStack_58,uVar3);
  return;
}

