
void FUN_02079e40(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  short local_10;
  short local_e;
  undefined2 local_c;
  undefined2 local_a;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(*(int *)(param_3 + 4) + 100);
  local_10 = ((ushort)*(byte *)(iVar1 + 0x48) * -2 + 1) *
             (short)(((int)*(short *)(param_2 + 8) + (int)*(short *)(param_2 + 4)) / 2);
  local_e = ((ushort)*(byte *)(iVar1 + 0x49) * -2 + 1) *
            (short)(((int)*(short *)(param_2 + 10) + (int)*(short *)(param_2 + 6)) / 2);
  local_c = (undefined2)(((int)*(short *)(param_2 + 8) - (int)*(short *)(param_2 + 4)) / 2);
  local_a = (undefined2)(((int)*(short *)(param_2 + 10) - (int)*(short *)(param_2 + 6)) / 2);
  uStack_8 = param_4;
  FUN_0207b22c(*(undefined4 *)
                ((((int)*(char *)(param_2 + 0xe) << 0x1a) >> 0x1a) * 0xc + param_1 + 0x70),&local_10
               ,((int)*(char *)(param_2 + 0xf) << 0x1a) >> 0x1a);
  return;
}

