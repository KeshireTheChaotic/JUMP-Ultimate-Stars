
undefined1 * FUN_021c15a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = param_2 + 1;
  *param_2 = *param_1;
  switch(*param_1) {
  default:
    return (undefined1 *)0x0;
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
    break;
  case 4:
    *puVar1 = (char)*(undefined2 *)(param_1 + 2);
    param_2[2] = (char)((ushort)*(undefined2 *)(param_1 + 2) >> 8);
    param_2[3] = (char)*(undefined2 *)(param_1 + 4);
    puVar1 = param_2 + 5;
    param_2[4] = (char)((ushort)*(undefined2 *)(param_1 + 4) >> 8);
  }
  return puVar1;
}

