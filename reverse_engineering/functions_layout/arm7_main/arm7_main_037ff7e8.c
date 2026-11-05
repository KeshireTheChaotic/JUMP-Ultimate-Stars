
void FUN_037ff7e8(int param_1,char param_2,undefined4 param_3,undefined2 param_4,int param_5,
                 char param_6,byte param_7)

{
                    /* JUS-TAG hw={"SOUND":3} io=["04000508","04000510","04000514"] */
  (&DAT_04000508)[param_1] = param_7 | param_2 << 3 | (param_5 == 0) << 2 | param_6 << 1;
  *(undefined4 *)(param_1 * 8 + 0x4000510) = param_3;
  *(undefined2 *)(param_1 * 8 + 0x4000514) = param_4;
  return;
}

