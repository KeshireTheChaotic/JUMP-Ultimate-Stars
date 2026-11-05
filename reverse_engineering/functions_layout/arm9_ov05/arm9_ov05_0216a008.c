
void FUN_0216a008(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  
  local_60 = 0x87;
  local_5f = 0x40;
  local_5e = 0;
  uVar1 = FUN_02075870(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  for (uVar4 = 0; (int)uVar4 < *(int *)(param_1 + 0x68); uVar4 = uVar4 + 1) {
    if (((&DAT_020b0cf8)[uVar4 >> 5] & 1 << (uVar4 & 0x1f)) != 0) {
      iVar2 = FUN_020758b8(*(undefined4 *)(param_1 + 8),uVar4);
      iVar2 = (iVar2 + 0x875f) * 0x10000;
      local_5c = (undefined1)((uint)iVar2 >> 0x18);
      local_5b = (undefined1)((uint)iVar2 >> 0x10);
      local_5a = 0;
      iVar2 = FUN_02169ea8(uVar4);
      if (iVar2 != 0) {
        thunk_FUN_020741c4(&local_5c,&local_60);
      }
      uVar1 = FUN_02075878(*(undefined4 *)(param_1 + 8),uVar4);
      thunk_FUN_020741c4(&local_5c,uVar1);
      func_0x021ace90(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4),&local_5c,uVar4);
    }
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0x44) + 4);
  (**(code **)(*piVar3 + 0x1a0))(piVar3,param_2,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0x44) + 4);
  (**(code **)(*piVar3 + 0x198))(piVar3,param_2);
  *(undefined4 *)(param_1 + 100) = param_2;
  return;
}

