
void FUN_0214f558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  
  iVar2 = DAT_0216bc24 + ((uint)(DAT_0216bc24 >> 0xb) >> 0x14);
  iVar1 = iVar2 >> 0x1f;
  for (uVar7 = 0; (int)uVar7 < *(int *)(param_1 + 0x60); uVar7 = uVar7 + 1) {
    uVar3 = *(uint *)(param_1 + 0x68);
    if ((uVar3 & 7) >> 2 == 0) {
      if ((((uVar3 & 0x7fff) >> 9 & 1 << (uVar7 & 0xff)) != 0) &&
         (((uVar3 & 0x1ff) >> 3 & 1 << (uVar7 & 0xff)) == 0)) {
        FUN_02023894(*(undefined4 *)(*(int *)(param_1 + uVar7 * 4 + 0xc) + 4),0x12004,0);
        (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + uVar7 * 4 + 0xc) + 4) + 0x68) + 0x6c))()
        ;
        piVar6 = *(int **)(*(int *)(param_1 + uVar7 * 4 + 0xc) + 4);
        (**(code **)(*piVar6 + 0xd8))(piVar6,1);
      }
    }
    else if (((uint)DAT_020aff28 & 1 << (uVar7 & 0xff)) != 0) {
      piVar6 = *(int **)(*(int *)(param_1 + uVar7 * 4 + 0x24) + 4);
      (**(code **)(*(int *)piVar6[0x19] + 0x70))();
      (**(code **)(*piVar6 + 0xc4))();
      if (1 < (int)uVar7) {
        piVar6 = *(int **)(*(int *)(*(int *)(param_1 + uVar7 * 4 + 0x24) + 4) + 100);
        pcVar5 = *(code **)(*piVar6 + 0x80);
        (*pcVar5)(piVar6,((uint)((iVar2 >> 0xc) * 0x20000000 + iVar1) >> 0x1d | iVar1 << 3) - iVar1,
                  2,pcVar5,param_4);
      }
      iVar4 = param_1 + uVar7 * 4;
      piVar6 = *(int **)(*(int *)(*(int *)(iVar4 + 0x24) + 4) + 100);
      (**(code **)(*piVar6 + 0x68))(piVar6,*(undefined4 *)(iVar4 + 0x48));
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + uVar7 * 4 + 0xc) + 4),0x12003,0);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + uVar7 * 4 + 0xc) + 4) + 0x68) + 0x6c))();
      piVar6 = *(int **)(*(int *)(param_1 + uVar7 * 4 + 0xc) + 4);
      (**(code **)(*piVar6 + 0xd8))(piVar6,1);
    }
  }
  return;
}

