
void FUN_02023bd8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  for (uVar3 = 0; uVar2 = (**(code **)(*param_1 + 0xac))(), uVar3 < uVar2; uVar3 = uVar3 + 1) {
    iVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar3);
    iVar1 = *(int *)(iVar1 + 100);
    FUN_02015008(iVar1,param_2 >> 0xf != 0xff);
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x10))((int *)(iVar1 + 0x14),param_2);
    *(undefined4 *)(iVar1 + 0x3c) = 0;
  }
  return;
}

