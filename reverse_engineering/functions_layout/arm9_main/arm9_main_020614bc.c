
void FUN_020614bc(undefined4 *param_1)

{
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)param_1[2]) {
    (*(code *)*param_1)(param_1[1]);
  }
  return;
}

