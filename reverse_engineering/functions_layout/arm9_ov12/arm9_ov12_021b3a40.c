
void FUN_021b3a40(uint *param_1,uint *param_2)

{
  *param_1 = *param_2 & 0xfffffffe | *param_1 & 1;
  return;
}

