
void FUN_0215b6f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  
  puVar4 = *(undefined1 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_0214fb7c(*(undefined4 *)(puVar4 + 4));
  uVar2 = *(uint *)(*(int *)(*(int *)(iVar1 + 4) + 0x10) + 0x18);
  if ((uVar2 & 0x10) == 0) {
    if ((uVar2 & 8) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 2;
  }
  uVar3 = FUN_0214fb7c(*(undefined4 *)(puVar4 + 4));
  FUN_0214d28c(uVar3,0xe,*puVar4,uVar5,param_4);
  if (*(int *)(puVar4 + 8) != 0) {
    func_0x021bab64();
    *(undefined4 *)(puVar4 + 8) = 0;
  }
  if (*(int **)(puVar4 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(puVar4 + 4) + 8))();
    *(undefined4 *)(puVar4 + 4) = 0;
  }
  func_0x021b65cc();
  FUN_0201b244(puVar4);
  return;
}

