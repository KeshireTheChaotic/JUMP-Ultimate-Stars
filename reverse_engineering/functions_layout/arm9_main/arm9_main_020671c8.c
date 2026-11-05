
int FUN_020671c8(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if ((undefined1 *)param_1[2] == puVar1) {
    return 0;
  }
  switch((uint)puVar1 & 3) {
  case 0:
    return (int)puVar1 - param_1[2];
  case 1:
    *param_1 = (int)(puVar1 + 1);
    *puVar1 = 0;
    break;
  case 2:
    break;
  case 3:
    goto LAB_02067228;
  default:
    goto switchD_020671e4_default;
  }
  puVar1 = (undefined1 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  *puVar1 = 0;
LAB_02067228:
  puVar1 = (undefined1 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  *puVar1 = 0;
switchD_020671e4_default:
  if (param_1[4] != 0) {
    puVar2 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar2 + 1);
    *puVar2 = 0;
    param_1[4] = 0;
  }
  *param_1 = param_1[1];
  return *param_1 - param_1[2];
}

