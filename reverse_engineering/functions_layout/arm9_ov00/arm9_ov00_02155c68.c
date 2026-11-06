
void FUN_02155c68(int param_1,int param_2)

{
  *(int *)(param_1 + 0x7c) = param_2;
  (*(code *)0x21bd731)
            (*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(&DAT_02161098 + param_2 * 4),0);
  return;
}

