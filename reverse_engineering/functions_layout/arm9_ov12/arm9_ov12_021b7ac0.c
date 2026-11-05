
void FUN_021b7ac0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if ((*(uint *)(param_1 + 0x90) & 1) == 1) {
    (**(code **)(*param_2 + 0x14c))(param_2,2,0x14c,*(code **)(*param_2 + 0x14c),param_4);
  }
  if (param_2[0x11] == param_1) {
    (**(code **)(*param_2 + 0xd4))(param_2,0);
  }
  FUN_02025a40(*(undefined4 *)(param_1 + 0x138),param_2);
  if (((param_2[0x24] & 1U) == 1) && ((int)((uint)*(byte *)((int)param_2 + 0x29) << 0x18) < 0)) {
    (**(code **)(*param_2 + 0x14c))();
  }
  (**(code **)(**(int **)(param_1 + 0x138) + 0x18))(*(int **)(param_1 + 0x138),param_2);
  (**(code **)(*(int *)param_2[0x19] + 0x28))((int *)param_2[0x19],0);
  return;
}

