
void FUN_02166190(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_1c;
  int iStack_18;
  
  if (DAT_0214ccf8 == (int *)0x0) {
    iStack_18 = param_4;
    iVar1 = FUN_021662ec(DAT_020a0e80);
    iVar2 = FUN_02031124();
    FUN_020314a0(*(undefined4 *)(iVar2 + 4));
    DAT_0214ccf8 = (int *)&DAT_021aa0d8;
    FUN_020517fc(&DAT_021aa0d8,0,0x1cb4);
    DAT_0214ccf8[5] = param_1;
    DAT_0214ccf8[6] = param_2;
    DAT_0214ccf8[0x11] = param_3;
    DAT_0214ccf8[0x12] = 0;
    DAT_0214ccf8[0x13] = 0;
    *(undefined1 *)(DAT_0214ccf8 + 0x14) = 0;
    DAT_0214ccf8[3] = 0;
    DAT_0214ccf8[4] = 0;
    DAT_0214ccf8[9] = 0;
    DAT_0214ccf8[0x10] = -1;
    *(undefined1 *)((int)DAT_0214ccf8 + 0x5b) = 0;
    *(undefined1 *)((int)DAT_0214ccf8 + 0x5a) = 2;
    thunk_FUN_02002488(DAT_0214ccf8 + 0x37,0xff,0x800);
    func_0x0219a22c();
    if (param_4 == 0) {
      func_0x021a3178(DAT_0214ccf8 + 0x6f8);
      param_4 = 0x21a34d0;
      param_5 = func_0x021a314c();
    }
    *DAT_0214ccf8 = param_4;
    DAT_0214ccf8[1] = param_5;
    iVar2 = func_0x021a02c0(DAT_0214ccf8 + 0x318);
    DAT_0214ccf8[0x6f5] = iVar2;
    piVar5 = DAT_0214ccf8 + 0x1c;
    FUN_020517fc(piVar5,0,0x16);
    uVar3 = FUN_02071f08();
    FUN_02051890(uVar3,piVar5,0x14);
    func_0x021a1c5c(DAT_0214ccf8 + 0x22);
    iVar2 = FUN_02026f94();
    DAT_0214ccf8[2] = iVar2;
    local_1c = 0x2000;
    (**(code **)(**(int **)(DAT_0214ccf8[2] + 4) + 0xa0))(*(int **)(DAT_0214ccf8[2] + 4),&local_1c);
    FUN_02028384(*(undefined4 *)(DAT_0214ccf8[2] + 4),0x2166389);
    (**(code **)(**(int **)(DAT_0214ccf8[2] + 4) + 0x24))();
    func_0x0219dfc8();
    FUN_020314a0(*(undefined4 *)(iVar1 + 4));
    puVar4 = (undefined4 *)FUN_0201a2fc();
    FUN_0201aeec(*puVar4,1);
  }
  return;
}

