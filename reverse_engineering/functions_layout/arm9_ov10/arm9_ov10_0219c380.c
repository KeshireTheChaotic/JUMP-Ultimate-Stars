
void FUN_0219c380(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  iVar2 = 0;
  do {
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar4 = (&DAT_021a3684)[(0xb - iVar2) * 2];
    uVar3 = (&DAT_021a3688)[(0xb - iVar2) * 2];
    uVar1 = FUN_0200d0c4((int)uVar6,uVar5,uVar4,uVar3,param_4);
    uVar6 = FUN_0200d0d0((int)uVar6,uVar5,uVar4,uVar3);
    *(undefined1 *)(param_3 + iVar2) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xb);
  *(char *)(param_3 + iVar2) = (char)uVar6;
  return;
}

