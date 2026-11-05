
void FUN_02158c1c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (uVar2 = (**(code **)*param_2)(), (uVar2 & 4) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    *(undefined1 *)(iVar1 + 0x6d) = 1;
    FUN_0207342c(0x78,0);
    iVar1 = *(int *)(iVar1 + 0x7c);
    pcVar3 = *(code **)(iVar1 + 0x24);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*(undefined4 *)(iVar1 + 0x14),1);
    }
  }
  return;
}

