
void FUN_02023a70(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  
  uVar4 = 0;
  while( true ) {
    uVar3 = (**(code **)(*param_1 + 0xac))();
    uVar5 = uVar4 == uVar3;
    if (uVar3 <= uVar4) break;
    iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar4);
    iVar1 = *(int *)(iVar1 + 100);
    uVar2 = FUN_0200c954(*(undefined4 *)(param_2 + 0xc));
    uVar2 = FUN_0200c5ac(uVar2,0x45800000);
    FUN_0200c558(0x3f800000,uVar2);
    FUN_02015008(iVar1,!(bool)uVar5);
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x14))((int *)(iVar1 + 0x14),param_2);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    uVar4 = uVar4 + 1;
  }
  return;
}

