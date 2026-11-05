
bool FUN_02162a1c(int param_1,short *param_2,undefined1 *param_3,undefined1 *param_4)

{
  int iVar1;
  
  if (((char)param_2[1] == '\x06') && ((*(uint *)(param_1 + 0x3c) & 8) == 0)) {
    iVar1 = *(int *)(param_1 + 0x20) +
            *(short *)(*param_2 * 0x18 + *(int *)(param_1 + 0x18) + 0x16) * 8;
    *param_3 = *(undefined1 *)(iVar1 + 3);
    *param_4 = *(undefined1 *)(iVar1 + 2);
    return *(char *)(iVar1 + 6) != '\0';
  }
  return false;
}

