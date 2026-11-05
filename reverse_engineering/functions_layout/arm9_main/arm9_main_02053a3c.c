
/* JUS-SDK OS_LoadContext [exact] instruction subsequence OS_LoadContext */

void OS_LoadContext(int param_1)

{
  FUN_0204f864(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x02053a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(*(int *)(param_1 + 0x3c) + -4))
            (*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  return;
}

