
void FUN_020247b8(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (((*(byte *)(param_1 + 0x29) & 0x3f) >> 5 != 0) &&
     (iVar1 = (**(code **)(*(int *)param_2[0xc] + 0x10))(), iVar1 != 0)) {
    (**(code **)(*(int *)param_2[0xc] + 0x60))((int *)param_2[0xc],1,FUN_02024a68,0);
  }
  uVar2 = 0;
  do {
    if (*(ushort *)(param_1 + 0x74) <= uVar2) {
LAB_0202484c:
      (**(code **)(*param_2 + 0xe8))(param_2,0);
      return;
    }
    if (*(int **)(*(int *)(param_1 + 0x6c) + uVar2 * *(int *)(param_1 + 0x70)) == param_2) {
      FUN_020288a4();
      FUN_02038010(param_1 + 0x6c,uVar2);
      goto LAB_0202484c;
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

