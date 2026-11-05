
void FUN_0214ce9c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  uVar1 = FUN_0200d12c(*param_5 * 0x1ff6210,0x40);
  uVar2 = FUN_0200d12c(param_5[1] * 0x1ff6210,0x40);
  func_0x0219350c(&local_18,1,uVar1 + uVar2,
                  ((int)uVar1 >> 0x1f) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar1,uVar2));
  return;
}

