
void FUN_02155908(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (param_1 != (int *)0x0) {
    *(undefined1 *)(param_1 + 3) = 0;
    uStack_c = param_4;
    uVar1 = FUN_02155a3c();
    local_10 = 0;
    FUN_02155970(uVar1,&local_10);
    (**(code **)(**(int **)(param_1[2] + 4) + 0xd8))(*(int **)(param_1[2] + 4),1);
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_02155a8c);
  }
  return;
}

