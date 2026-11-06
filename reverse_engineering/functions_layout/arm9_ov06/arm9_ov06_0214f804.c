
void FUN_0214f804(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  *param_1 = FUN_02150f64 + 1;
  param_1[2] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_3;
  *(undefined1 *)((int)param_1 + 0xc9) = 0;
  *(undefined1 *)((int)param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)((int)param_1 + 0xcb) = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  *(undefined1 *)((int)param_1 + 199) = 0;
  param_1[0x2b] = 0;
  for (iVar2 = 0; iVar2 < (int)param_1[5]; iVar2 = iVar2 + 1) {
    bVar3 = *(byte *)((int)param_1 + 199);
    if ((int)(uint)*(byte *)((int)param_1 + 199) <= (int)(char)(&DAT_020afebe)[iVar2]) {
      bVar3 = (&DAT_020afebe)[iVar2];
    }
    *(byte *)((int)param_1 + 199) = bVar3;
  }
  *(char *)((int)param_1 + 199) = *(char *)((int)param_1 + 199) + '\x01';
  (**(code **)(&DAT_02170eac + param_1[2] * 0xc))(param_1);
  uVar1 = DAT_020afeac;
  if (DAT_020afeba != '\0') {
    param_1[4] = 0xffffffff;
    return;
  }
  if ((param_1[2] == 3) || (param_1[2] == 7)) {
    param_1[4] = 0x116f;
    param_1[3] = 0x116f;
    return;
  }
  param_1[4] = DAT_020afeac;
  param_1[3] = uVar1;
  return;
}

