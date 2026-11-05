
/* JUS-CLASS ALFont_021d5010::ALFont_021d5010 [class-source-file] stores vtable 021d5010 into *this
   (constructor) */

int * ALFont_021d5010::ALFont_021d5010(int *param_1,int param_2)

{
  jus_Class_020941f0::jus_Class_020941f0();
  *param_1 = (int)&vftable;
  ALUtilImp::SetItemSize(param_1 + 7);
  param_1[0xc] = *(int *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0x38);
  *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(param_2 + 0x3a);
  param_1[0xf] = *(int *)(param_2 + 0x3c);
  param_1[0x10] = 0;
  param_1[0x13] = *(int *)(param_2 + 0x4c);
  param_1[0x14] = *(int *)(param_2 + 0x50);
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  DAT_021d52dc = DAT_021d52dc + 1;
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 8))();
  }
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 8))();
  }
  param_1[0xd] = *(int *)(param_2 + 0x34);
  *(int **)(param_2 + 0x34) = param_1;
  (**(code **)(*param_1 + 8))();
  while (*(ushort *)(param_1 + 1) < *(ushort *)(param_2 + 4)) {
    *(short *)(param_1 + 1) = (short)param_1[1] + 1;
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_021cb858(param_1 + 7,param_2 + 0x1c);
  return param_1;
}

