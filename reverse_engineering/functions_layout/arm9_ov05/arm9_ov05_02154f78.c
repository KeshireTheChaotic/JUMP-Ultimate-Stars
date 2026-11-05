
void FUN_02154f78(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_021553b4(param_1,0,0x1f);
    FUN_02155680(param_1);
    *(undefined4 *)(param_1 + 0x454) = 1;
    FUN_02154edc(param_1);
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x3d0) + 4),FUN_021551e8);
    FUN_021556d8(param_1,0);
  }
  else {
    if (*(int *)(param_1 + 0x3bc) != 0) {
      FUN_0207907c(*(int *)(param_1 + 0x3bc),*(undefined4 *)(param_1 + 0x3b8));
    }
    FUN_021553b4(param_1,0,0x1f);
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x3d0) + 4),FUN_02155100);
    FUN_021556d8(param_1,0);
  }
  *(undefined1 *)(param_1 + 0x469) = 0;
  FUN_02073778();
  return;
}

