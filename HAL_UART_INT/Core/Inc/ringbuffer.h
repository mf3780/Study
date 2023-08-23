#ifndef RING_BUFFER_H__
#define RING_BUFFER_H__

#include <stdint.h>


#define RING_BUFFER_LENGTH 1000

typedef struct 
{
	uint8_t buf[RING_BUFFER_LENGTH];
#if RING_BUFFER_LENGTH < 255
	uint8_t head, tail;
#else
	uint16_t head, tail;
#endif
} RingBuffer;

typedef enum {
	RING_BUFFER_OK = 0x0,
	RING_BUFFER_FULL,
	RING_BUFFER_NO_SUFFICIENT_SPACE
} RingBuffer_Status;

<<<<<<< .mine
 uint16_t RingBuffer_GetDataLength(RingBuffer *buf);
 uint16_t RingBuffer_GetFreeSpace(RingBuffer *buf);
=======
extern uint16_t RingBuffer_GetDataLength(RingBuffer *buf);
 uint16_t RingBuffer_GetFreeSpace(RingBuffer *buf);
>>>>>>> .theirs
void RingBuffer_Init(RingBuffer *buf);
<<<<<<< .mine
 uint16_t RingBuffer_Read(RingBuffer *buf, uint8_t *data, uint16_t len);
 uint8_t RingBuffer_Write(RingBuffer *buf, uint8_t *data, uint16_t len);
=======
extern uint16_t RingBuffer_Read(RingBuffer *buf, uint8_t *data, uint16_t len);
extern uint8_t RingBuffer_Write(RingBuffer *buf, uint8_t *data, uint16_t len);
>>>>>>> .theirs

#endif //#ifndef RING_BUFFER_H__

