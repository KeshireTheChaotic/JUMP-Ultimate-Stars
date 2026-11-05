
int FUN_021801bc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined1 local_34;
  undefined1 uStack_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  
  if (*param_1 == 1) {
    FUN_021810b4(param_1,0,0,2,0);
  }
  if (*param_1 == 1) {
    return 3;
  }
  local_34 = (undefined1)((uint)(param_5 + 9) >> 8);
  local_32 = local_34;
  uStack_33 = (undefined1)(param_5 + 9);
  local_31 = uStack_33;
  local_30 = 2;
  local_c = (undefined1)param_2;
  local_2f = local_c;
  local_b = (undefined1)((uint)param_2 >> 8);
  local_2e = local_b;
  local_a = (undefined1)((uint)param_2 >> 0x10);
  local_2d = local_a;
  local_9 = (undefined1)((uint)param_2 >> 0x18);
  local_2c = local_9;
  local_8 = (undefined1)param_3;
  local_2b = local_8;
  local_7 = (undefined1)((uint)param_3 >> 8);
  local_2a = local_7;
  iVar1 = FUN_02181290(param_1,&local_32,9);
  if (iVar1 == 0) {
    iVar1 = FUN_02001a88(param_1[300],param_4,param_5,0);
    if (iVar1 < 0) {
      return 3;
    }
    iVar1 = 0;
  }
  return iVar1;
}

