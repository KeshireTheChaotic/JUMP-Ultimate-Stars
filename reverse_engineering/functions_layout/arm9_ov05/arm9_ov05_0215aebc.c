
void FUN_0215aebc(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar6 = 0;
  uStack_28 = param_4;
  do {
    iVar4 = *(int *)(param_1 + iVar6 * 4 + 0x8c);
    if (iVar4 != 0) {
      FUN_02159810(iVar4,param_2);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 7);
  uVar7 = *(undefined4 *)(param_1 + 0xfc);
  if (param_2 == 0) {
    FUN_0215ced4(&local_2c,uVar7);
    FUN_0215b71c(local_2c);
    iVar6 = FUN_0215b6f4();
    FUN_02029c68(*(undefined4 *)(iVar6 + 4),param_1 + 0x116,1,0xf);
  }
  else {
    iVar6 = 1;
    do {
      uVar5 = (uint)*(ushort *)(param_1 + iVar6 * 2 + 0x114);
      uVar1 = FUN_0200d338(((int)uVar5 >> 10 & 0x1fU) * 0x32,100);
      uVar2 = FUN_0200d338((uVar5 & 0x1f) * 0x32,100);
      uVar3 = FUN_0200d338(((int)uVar5 >> 5 & 0x1fU) * 0x32,100);
      iVar4 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      *(ushort *)(iVar4 + 0x21722bc) = uVar2 & 0x1f | (uVar3 & 0x1f) << 5 | (uVar1 & 0x1f) << 10;
    } while (iVar6 < 0x10);
    FUN_0215ced4(&local_30,uVar7);
    FUN_0215b71c(local_30);
    iVar6 = FUN_0215b6f4();
    FUN_02029c68(*(undefined4 *)(iVar6 + 4),&DAT_021722be,1,0xf);
  }
  return;
}

