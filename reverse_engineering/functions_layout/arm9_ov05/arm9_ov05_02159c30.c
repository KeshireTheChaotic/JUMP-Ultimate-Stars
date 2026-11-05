
void FUN_02159c30(int param_1,int param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x88) + 4),1);
  if (param_2 != 0) {
    FUN_0215a88c(param_1,0,0,*(undefined4 *)(param_1 + 0xa8),0);
    if (*(int *)(param_1 + 0xc) != 0) {
      *(undefined1 *)(param_1 + 0x4d6) = 0xff;
      FUN_0215aa08(param_1,*(undefined4 *)(param_1 + 0xa8),0x29,0);
    }
    local_14 = 0;
    local_10 = 0;
    FUN_02159cd8(*(undefined4 *)
                  ((uint)*(byte *)(param_1 + 0x4e3) * 0x14 + param_1 +
                   (uint)*(byte *)(param_1 + 0x4e2) * 4 + 0xa8),&local_10,&local_14,0x10001);
  }
  return;
}

