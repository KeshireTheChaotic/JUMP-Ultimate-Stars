
void FUN_0216ee44(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  
  *(uint *)(*(int *)(param_2 + 0x10) + 0x78) =
       *(uint *)(*(int *)(param_2 + 0x10) + 0x78) & 0xffefffff;
  *(uint *)(*(int *)(param_2 + 0x10) + 0x78) =
       *(uint *)(*(int *)(param_2 + 0x10) + 0x78) & 0xfffcffff;
  FUN_0207d11c(*(undefined4 *)(param_2 + 0x10),0);
  FUN_0207d020(*(undefined4 *)(param_2 + 0x10),0x800);
  pcVar1 = *(char **)(param_1 + 0x10);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = *pcVar1 + '\x01';
  }
  FUN_0216a944(param_2,*(undefined4 *)(param_1 + 0xc),param_3,0,0,*(undefined4 *)(param_1 + 0x10),
               0xffffffff,*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x22),
               *(undefined4 *)(param_1 + 0x28),(int)*(char *)(param_2 + 0x39),param_4);
  return;
}

