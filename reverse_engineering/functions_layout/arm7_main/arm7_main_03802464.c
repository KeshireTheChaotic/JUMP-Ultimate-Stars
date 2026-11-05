
bool FUN_03802464(int param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,char *param_6)

{
  int iVar1;
  char cVar2;
  
  cVar2 = param_6[10];
  if (cVar2 == -1) {
    param_4 = 0xffffffff;
    cVar2 = '\0';
  }
  switch(*param_6) {
  case '\0':
  default:
    iVar1 = 0;
    break;
  case '\x01':
    goto LAB_038024b4;
  case '\x02':
    iVar1 = FUN_0380015c(param_1,*(undefined2 *)(param_6 + 2),param_4);
    break;
  case '\x03':
    iVar1 = FUN_03800110(param_1,param_4);
    break;
  case '\x04':
LAB_038024b4:
    if (*param_6 == '\x01') {
      iVar1 = FUN_03802424(param_5,*(undefined2 *)(param_6 + 4),*(undefined2 *)(param_6 + 2));
    }
    else {
      iVar1 = *(int *)(param_6 + 2);
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_038001b0(param_1,iVar1,iVar1 + 0xc,param_4);
    }
  }
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 8) = param_2;
    *(char *)(param_1 + 5) = param_6[6];
    *(undefined1 *)(param_1 + 9) = param_3;
    FUN_03800038(param_1,param_6[7]);
    FUN_0380001c(param_1,param_6[8]);
    FUN_03800014(param_1,param_6[9]);
    FUN_037ffff8(param_1,cVar2);
    *(char *)(param_1 + 10) = param_6[0xb] + -0x40;
  }
  return iVar1 != 0;
}

