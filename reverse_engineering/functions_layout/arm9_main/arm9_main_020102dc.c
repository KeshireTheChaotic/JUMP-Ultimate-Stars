
undefined4 FUN_020102dc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  (**(code **)(*param_2 + 4))(param_2,auStack_38,0x20);
  (**(code **)(*param_2 + 0x18))(param_2,0);
  iVar3 = 0;
  while( true ) {
    if (DAT_020a1010 <= iVar3) {
      return 0;
    }
    iVar1 = (**(code **)(*(int *)(&DAT_020a1a24)[iVar3] + 0x20))
                      ((int *)(&DAT_020a1a24)[iVar3],auStack_38);
    if (iVar1 != 0) break;
    iVar3 = iVar3 + 1;
  }
  uVar2 = (**(code **)(*(int *)(&DAT_020a1a24)[iVar3] + 0x24))
                    ((int *)(&DAT_020a1a24)[iVar3],param_2[1]);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return 1;
}

