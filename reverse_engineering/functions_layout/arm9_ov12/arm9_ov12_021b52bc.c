
int FUN_021b52bc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  uStack_10 = param_4;
  FUN_0200f69c(&uStack_10,1);
  iVar1 = (*param_1 + param_1[1] * 4) - param_2;
  FUN_02002450(param_2,param_2 + 4,(((int)(iVar1 + ((uint)(iVar1 >> 1) >> 0x1e)) >> 2) + -1) * 4);
  param_1[1] = param_1[1] + -1;
  return param_2;
}

