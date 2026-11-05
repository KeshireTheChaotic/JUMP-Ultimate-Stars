
void FUN_0214de14(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(DAT_0214bd80 + 0x18f0);
  puVar2 = *(undefined4 **)(DAT_0214bd80 + 0x58);
  puVar3 = *(undefined4 **)(DAT_0214bd80 + 0x5c);
  iVar4 = 0;
  uVar6 = param_4;
  if (iVar5 != 0) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      iVar1 = (*(code *)(&PTR_FUN_0216f3c4)[param_2])
                        (puVar2,param_3,param_4,(&PTR_FUN_0216f3c4)[param_2],uVar6);
      if (iVar1 != 0) {
        iVar4 = iVar4 + 1;
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3 = puVar3 + 2;
      }
      puVar2 = puVar2 + 2;
    }
  }
  *(int *)(DAT_0214bd80 + 0x18f0) = iVar4;
  FUN_02051890(*(undefined4 *)(DAT_0214bd80 + 0x5c),*(undefined4 *)(DAT_0214bd80 + 0x58),
               *(int *)(DAT_0214bd80 + 0x18f0) << 3);
  return;
}

